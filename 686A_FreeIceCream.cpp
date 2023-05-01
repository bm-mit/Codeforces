#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    int n, result = 0;
    ll x;
    cin >> n >> x;

    for (int i = 0; i < n; ++i)
    {
        string s;
        int t;
        cin >> s >> t;
        if (s == "-")
        {
            if (x - t < 0)
                ++result;
            else
                x -= t;
        }
        else
            x += t;
    }

    cout << x << ' ' << result;

    return 0;
}