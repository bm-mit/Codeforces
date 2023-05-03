//* 202784045	Apr/20/2023 13:54UTC+7	Minh4893IT	A - Vasya the Hipster	GNU C++17	Accepted	15 ms	0 KB

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    cout << min(a, b) << ' ' << (max(a, b) - min(a, b)) / 2;

    return 0;
}