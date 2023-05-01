//* 202782414	Minh4893IT	950A - 20	GNU C++17	Accepted	15 ms	8 KB

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l, r, a;
    cin >> l >> r >> a;

    int minLR = min(l, r);
    int maxLR = max(l, r);
    l = minLR;
    r = maxLR;
    int diff = min(a, r - l);
    l += diff;
    a -= diff;

    cout << l * 2 + a - a % 2;

    return 0;
}