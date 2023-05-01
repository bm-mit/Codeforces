#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, k, d;
    cin >> n >> t >> k >> d;

    int curr = 0;
    while (curr <= d)
    {
        n -= k;
        curr += t;
    }

    cout << (n > 0 ? "YES" : "NO");

    return 0;
}