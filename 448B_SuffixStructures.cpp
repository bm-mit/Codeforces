//* 224781593	Sep/23/2023 23:46UTC+7	Minh4893IT	B - Suffix Structures	GNU C++14	Accepted	15 ms	100 KB

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
    string s1, s2;
    map<char, int> count1, count2;

    cin >> s1 >> s2;
    for (auto c : s1)
        ++count1[c];
    for (auto c : s2)
        ++count2[c];

    int count = 0;
    int ptr1 = 0, ptr2 = 0;
    for (; ptr2 < s2.size(); ++ptr2)
        for (; ptr1 < s1.size(); ++ptr1)
            if (s1[ptr1] == s2[ptr2])
            {
                ++count;
                ++ptr1;
                break;
            }

    if (count == s2.size())
    {
        cout << "automaton";
        return;
    }

    bool both = false;
    for (char c = 'a'; c <= 'z'; ++c)
    {
        if (count1[c] < count2[c])
        {
            cout << "need tree";
            return;
        }
        if (count1[c] != count2[c])
            both = true;
    }

    cout << IF(both, "both", "array");
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
