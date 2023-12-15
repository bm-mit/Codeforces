//* 237299609	Dec/15/2023 12:46UTC+7	Minh4893IT	D - Make It Round	GNU C++14	Accepted	31 ms	0 KB

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

class MappedPair
{
    int first = 0, second = 0;
    int firstVal, secondVal;
    int temp;

public:
    MappedPair(int firstVal, int secondVal) : firstVal(firstVal), secondVal(secondVal) {}

    int &operator[](int key)
    {
        if (key == firstVal)
            return first;
        if (key == secondVal)
            return second;
        return temp;
    }

    int minKey()
    {
        if (first == second)
            return 10;
        if (first < second)
            return firstVal;
        return secondVal;
    }
};

void solve()
{
    int n, m;
    cin >> n >> m;

    MappedPair mp(2, 5);
    int temp = n;
    while (temp % 2 == 0 || temp % 5 == 0)
        if (temp % 2 == 0)
            temp /= 2, ++mp[2];
        else if (temp % 5 == 0)
            temp /= 5, ++mp[5];

    int k = 1;
    while (k * mp.minKey() < m)
    {
        k *= mp.minKey();
        ++mp[mp.minKey()];
    }

    cout << n * (m - m % k) << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
