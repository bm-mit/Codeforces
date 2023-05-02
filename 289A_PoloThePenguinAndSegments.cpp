//* 202689531	Apr/19/2023 16:13UTC+7	Minh4893IT	A - Polo the Penguin and Segments	GNU C++17	Accepted	530 ms	0 KB

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