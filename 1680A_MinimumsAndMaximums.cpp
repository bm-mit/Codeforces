//* 202326642	Apr/16/2023 12:29UTC+7	Minh4893IT	A - Minimums and Maximums	GNU C++17	Accepted	46 ms	0 KB

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    int maxl = max(l1, l2);
    int minr = min(r1, r2);
    if (maxl <= minr)
        cout << maxl << "\n";
    else
        cout << l1 + l2 << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}