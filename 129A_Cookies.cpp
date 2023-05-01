//* 203227142	Apr/24/2023 15:59UTC+7	Minh4893IT	A - Cookies	GNU C++17	Accepted	30 ms	0 KB

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int count[2] = {};

    while (n--)
    {
        int t = 0;
        cin >> t;
        ++count[t & 1];
        sum += t;
    }

    cout << count[sum & 1];

    return 0;
}