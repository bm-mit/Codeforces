//* 202153830	Apr/15/2023 12:28UTC+7	Minh4893IT	A - Function Height	GNU C++17	Accepted	15 ms	0 KB

#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    ll n, k;
    cin >> n >> k;

    cout << (k + n - 1) / n;

    return 0;
}