//* 235893762	Dec/05/2023 22:15UTC+7	Minh4893IT	B - YetnotherrokenKeoard	GNU C++14	Accepted	218 ms	63900 KB

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
    string s;
    cin >> s;

    vector<pair<char, int>> lower, upper;
    for (int i = 0; i < s.size(); ++i)
    {
        char c = s[i];
        if (tolower(c) != 'b')
        {
            if (islower(c))
                lower.push_back({c, i});
            else
                upper.push_back({c, i});
            continue;
        }

        if (c == 'b')
        {
            if (lower.size())
                lower.pop_back();
        }
        else
        {
            if (upper.size())
                upper.pop_back();
        }
    }

    vector<pair<char, int>> ans(lower.begin(), lower.end());
    for (auto elem : upper)
        ans.push_back(elem);
    sort(ans.begin(), ans.end(), [](pair<char, int> a, pair<char, int> b)
         { return a.second < b.second; });
    
    for (auto elem : ans)
        cout << elem.first;
    cout << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
