#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    ll p, a, b, c;
    cin >> p >> a >> b >> c;

    ll a1 = (p + a - 1) / a * a;
    ll b1 = (p + b - 1) / b * b;
    ll c1 = (p + c - 1) / c * c;

    ll mi = min(a1, b1);
    mi = min(mi, c1);
    cout << mi - p << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}