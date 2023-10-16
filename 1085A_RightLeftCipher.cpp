//* 228436048	Oct/16/2023 22:06UTC+7	Minh4893IT	A - Right-Left Cipher	GNU C++14	Accepted	15 ms	0 KB

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

    int n = s.size();
    int ptr1 = (n - 1) / 2;
    int ptr2 = ptr1;
    for (int i = 0; i < n; ++i)
    {
        if (i % 2)
        {
            cout << s[ptr1];
            --ptr2;
        }
        else
        {
            cout << s[ptr2];
            ++ptr1;
        }
    }
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
