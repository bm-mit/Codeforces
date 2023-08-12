//* 218301850	Aug/11/2023 20:16UTC+7	Minh4893IT	D - Good Substrings	GNU C++14	Accepted	1870 ms	44200 KB

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ss stringstream
#define endl "\n"
#define LLMAX INT64_MAX
#define IF(cond, t, f) (cond ? t : f)
#define OFILE(finp, fout) freopen(finp, "r", stdin), freopen(fout, "w", stdout)
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie()
#define MULTI \
    int t;    \
    cin >> t; \
    while (t--)

#define MOD 1000000007ll

string s, good;
int n, k;
const int p1 = 31;
const int p2 = 29;

void solve()
{
    set<pair<int, int>> result;
    for (int i = 0; i < n; ++i)
    {
        int hash1 = 0, hash2 = 0, cntgood = 0;
        for (int j = i; j < n; ++j)
        {
            int c = s[j] - 'a' + 1;
            cntgood += good[c - 1] == '0';
            if (cntgood > k)
                break;
            hash1 = (hash1 * p1 + c) % MOD;
            hash2 = (hash2 * p2 + c) % MOD;
            result.insert({hash1, hash2});
        }
    }

    cout << result.size();
}

void preprocess()
{
    cin >> s;
    n = s.size();
    cin >> good;
    cin >> k;
}

signed main()
{
    FAST_IO;

    // MULTI
    preprocess();
    solve();

    return 0;
}
