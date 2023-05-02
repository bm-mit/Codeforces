//* 201411004	Apr/09/2023 10:33UTC+7	Minh4893IT	A - Coins	GNU C++17	Accepted	15 ms	0 KB

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, k;
    cin >> n >> k;

    if (n & 1)
        cout << (k & 1 ? "YES\n" : "NO\n");
    else
        cout << "YES\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}