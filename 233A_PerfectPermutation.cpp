//* 202891021	Apr/21/2023 01:00UTC+7	Minh4893IT	233A - Perfect Permutation	GNU C++17	Accepted	30 ms	0 KB

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n & 1)
    {
        cout << -1;
        return 0;
    }

    for (int i = 1; i * 2 <= n; ++i)
        cout << i * 2 << ' ' << i * 2 - 1 << ' ';

    return 0;
}