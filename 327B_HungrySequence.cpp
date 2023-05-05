//* 204523373	May/05/2023 12:23UTC+7	Minh4893IT	B - Hungry Sequence	GNU C++14	Accepted	124 ms	1200 KB

#include <bits/stdc++.h>
using namespace std;

using sint = signed int;
#define ll long long
#define ull unsigned ll
#define int ll
#define ss stringstream
#define uset unordered_set
#define umap unordered_map
#define vec vector
#define pq priority_queue

#define LLMAX INT64_MAX

#define in cin
#define out cout
#define input in
#define print out
#define GET(var) getline(cin, var)

#define endl "\n"
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

#define FORIR(i, a, n) for (int i = a; i < n; i++)
#define FORI(i, n) FORIR(i, 0, n)
#define FORR(a, n) FORIR(i, a, n)
#define FOR(n) FORIR(i, 0, n)
#define EACH(x, a) for (auto &x : a)
#define IF(cond, t, f) (cond ? t : f)
template <class T>
void OFILE(T finp, T fout)
{
    freopen(finp, "r", stdin), freopen(fout, "w", stdout);
}

void solve()
{
    int n;
    cin >> n;

    vector<bool> prime(10000005, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= 10000000; ++i)
        if (prime[i])
            for (int j = i * i; j <= 10000000; j += i)
                prime[j] = false;
    
    int count = 0;
    int i = 0;
    while (count < n)
    {
        if (prime[i])
        {
            cout << i << ' ';
            ++count;
        }
        ++i;
    }
}

sint main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();

    solve();

    return 0;
}
