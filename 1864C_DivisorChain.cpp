//* 221695946	Sep/03/2023 20:47UTC+7	Minh4893IT	C - Divisor Chain	GNU C++14	Accepted	31 ms	100 KB

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ss stringstream
#define endl "\n"
#define LLMAX INT64_MAX
#define IF(cond, t, f) (cond ? t : f)
#define OFILE(finp, fout) freopen(finp, "r", stdin), freopen(fout, "w", stdout)
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(NULL)
#define MULTI \
    int t;    \
    cin >> t; \
    while (t--)

template <size_t T>
int countr(bitset<T> &bit)
{
    for (int i = 0; i < T; ++i)
        if (bit[i])
            return i;
    return bit.size();
}

template <size_t T>
bitset<T> &operator-=(bitset<T> &bit, int val)
{
    return bit = bit.to_ulong() - val;
}

void solve()
{
    int n;
    cin >> n;

    bitset<32> b(n);

    vector<int> result{0};
    int rbit;
    while (b.count() > 1)
    {
        rbit = countr(b);
        result.push_back(1 << rbit);
        b -= 1 << rbit;
    }

    while ((rbit = countr(b)) > 0)
    {
        result.push_back(1 << (rbit - 1));
        b -= 1 << (rbit - 1);
    }

    cout << result.size() << endl;
    for (auto elem : result)
        cout << (n -= elem) << ' ';
    cout << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
