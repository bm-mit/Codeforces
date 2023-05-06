//* 202499924	Apr/17/2023 21:10UTC+7	Minh4893IT	A - Carrot Cakes	GNU C++17	Accepted	15 ms	0 KB

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