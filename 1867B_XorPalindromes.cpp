//* 222936412	Sep/11/2023 22:08UTC+7	Minh4893IT	B - XOR Palindromes	GNU C++14	Accepted	46 ms	300 KB

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

int n;
string s;

bool isPalin(string &s)
{
    for (int i = 0; i < s.size() / 2; ++i)
        if (s[i] != s[s.size() - i - 1])
            return false;
    return true;
}

void solve()
{
    cin >> n >> s;

    string result(n + 1, '0');
    if (isPalin(s))
        result.front() = result.back() = '1';

    int count1 = 0;
    for (int i = 0; i < n / 2; ++i)
        count1 += s[i] != s[n - i - 1];

    int count2 = n / 2 - count1;
    for (int i = count1; i <= count1 + count2 * 2; i += 2)
    {
        result[i] = '1';
        if (n % 2)
            result[i + 1] = '1';
    }

    cout << result << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
