//* 202239970	Apr/15/2023 19:32UTC+7	Minh4893IT	A - Ian Visits Mary	GNU C++17	Accepted	15 ms	0 KB

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    cout << 2 << "\n"
         << a - 1 << ' ' << 1 << "\n"
         << a << ' ' << b << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}