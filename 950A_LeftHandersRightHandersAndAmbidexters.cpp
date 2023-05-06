//* 202782414	Apr/20/2023 13:29UTC+7	Minh4893IT	A - Left-handers, Right-handers and Ambidexters	GNU C++17	Accepted	15 ms	0 KB

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