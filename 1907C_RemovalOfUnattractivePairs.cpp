//* 235913546	Dec/05/2023 22:44UTC+7	Minh4893IT	C - Removal of Unattractive Pairs	GNU C++14	Accepted	62 ms	1000 KB

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

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    array<int, 256> cnt = {0};
    for (auto &c : s)
        ++cnt[c];

    sort(s.begin(), s.end(), [cnt](char a, char b)
         { if(cnt[a] == cnt[b]) return a < b; return cnt[a] > cnt[b]; });

    int l = 0;
    int r = n - 1;
    while (l < r)
        swap(s[l], s[r]), l += 2, r -= 2;

    string result;
    for (auto c : s)
    {
        if (result.empty())
        {
            result.push_back(c);
            continue;
        }

        if (c == result.back())
        {
            result.push_back(c);
            continue;
        }
        else
            result.pop_back();
    }

    cout << result.size() << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
