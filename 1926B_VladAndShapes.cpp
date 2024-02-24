//* 247817953	Feb/23/2024 10:03UTC+7	Minh4893IT#	B - Vlad and Shapes	GNU C++17	Accepted	0 ms	0 KB

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
 
    vector<string> board(n);
    for (int i = 0; i < n; ++i)
        cin >> board[i];
    
    bool tria = false;
    for (int i = 0; i < n; ++i)
        if (count(board[i].begin(), board[i].end(), '1') == 1)
            tria = true;
 
    cout << IF(tria, "TRIANGLE", "SQUARE") << endl;
}
 
signed main()
{
    FAST_IO;
 
    MULTI
    solve();
 
    return 0;
}
 
