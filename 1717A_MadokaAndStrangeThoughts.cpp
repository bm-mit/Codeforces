//* 202374540	Apr/16/2023 20:48UTC+7	Minh4893IT	A - Madoka and Strange Thoughts	GNU C++17	Accepted	0 ms	0 KB

#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    ll n;
    cin >> n;
    cout << 2 * (n / 3 + n / 2) + n << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solve();
}