//* 224937548	Sep/24/2023 22:37UTC+7	Minh4893IT	C - Make it Alternating	GNU C++14	Accepted	62 ms	5600 KB

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

array<int, 200005> factorial;
const int MOD = 998244353;

void preprocess()
{
    factorial[0] = 1;
    for (int i = 1; i < factorial.size(); ++i)
        factorial[i] = factorial[i - 1] * i % MOD;
}

int expo(int a, int b)
{
    if (!b)
        return 1;

    int t = expo(a, b / 2);
    if (b % 2)
        return t * t % MOD * a % MOD;
    return t * t % MOD;
}


int divmod(int a, int b)
{
    return a * expo(b, MOD - 2) % MOD;
}

// n! / (k!(n - k)!)
int nCk(int n, int k)
{
    return divmod(factorial[n], factorial[k] * factorial[n - k] % MOD);
}

void solve()
{
    string s;
    cin >> s;

    int n = s.size();

    string shortest = s;
    shortest.erase(unique(shortest.begin(), shortest.end()), shortest.end());

    if (shortest.size() == n)
    {
        cout << "0 1" << endl;
        return;
    }

    vector<pair<char, int>> count = {{s[0], 1}};
    for (int i = 1; i < n; ++i)
    {
        if (s[i] == count.back().first)
            ++count.back().second;
        else
            count.push_back({s[i], 1});
    }

    int result = 1;
    for (auto elem : count)
    {
        if (elem.second <= 1)
            continue;

        int temp = elem.second;
        int comb = nCk(temp, temp - 1);
        result = result * comb % MOD;
    }

    int l = n - shortest.size();
    cout << l << ' ' << result * factorial[l] % MOD << endl;
}

signed main()
{
    FAST_IO;

    preprocess();

    MULTI
    solve();

    return 0;
}
