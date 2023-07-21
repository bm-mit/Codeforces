//* 214706756	Jul/21/2023 13:50UTC+7	Minh4893IT	B - T-primes	GNU C++14	Accepted	684 ms	100 KB

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ss stringstream
#define uset unordered_set
#define umap unordered_map
#define mmap multimap
#define mset multiset
#define pq priority_queue
#define endl "\n"

#define LLMAX INT64_MAX
#define GET(var) getline(cin, var)
#define EACH(x, a) for (auto &x : a)
#define IF(cond, t, f) (cond ? t : f)
#define OFILE(finp, fout) freopen(finp, "r", stdin), freopen(fout, "w", stdout)
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie()

bitset<1000005> isPrime;
void preprocess()
{
    int n = 1000000;
    isPrime.flip();
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= n; ++i)
        if (isPrime[i])
            for (int j = i * i; j <= n; j += i)
                isPrime[j] = false;
}

void solve()
{
    preprocess();

    int n;
    cin >> n;
    while (n--)
    {
        int val;
        cin >> val;

        double sqrtv = sqrt(val);
        cout << IF(ceil(sqrtv) == sqrtv && isPrime[(int)sqrtv], "YES", "NO") << endl;
    }
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
