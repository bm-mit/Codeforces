#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int p = 0;
    while (n--)
    {
        int l, r;
        cin >> l >> r;
        p += r - l + 1;
    }

    cout << (k - p % k) % k;

    return 0;
}