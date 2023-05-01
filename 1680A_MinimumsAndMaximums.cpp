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