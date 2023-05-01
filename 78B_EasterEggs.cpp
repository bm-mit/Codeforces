//* 202890163	Apr/21/2023 00:50UTC+7	Minh4893IT	B - Easter Eggs	GNU C++17	Accepted	30 ms	0 KB

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    for (int i = 1; i <= n / 7; ++i)
        cout << "ROYGBIV";
    
    switch (n % 7)
    {
    case 0:
        break;
    case 1:
        cout << "G";
        break;
    case 2:
        cout << "GB";
        break;
    case 3:
        cout << "YGB";
        break;
    case 4:
        cout << "YGBI";
        break;
    case 5:
        cout << "OYGBI";
        break;
    
    default:
        cout << "OYGBIV";
        break;
    }

    return 0;
}