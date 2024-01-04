//* 240241993	Jan/04/2024 21:21UTC+7	Minh4893IT	D - Unnatural Language Processing	GNU C++14	Accepted	31 ms	500 KB

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

bool isVowel(char &c)
{
    return c == 'a' || c == 'e';
}

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int last = 0;
    for (int i = 2; i < n - 1; ++i)
        if (!isVowel(s[i]) && !isVowel(s[i + 1]))
            cout << s.substr(i - 2, 3) << '.', last = i + 1, i += 2;
        else
            cout << s[i - 2] << s[i - 1] << '.', last = i++;
    
    cout << s.substr(last);
    cout << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
