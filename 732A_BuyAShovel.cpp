//* 202470085	Apr/17/2023 17:22UTC+7	Minh4893IT	A - Buy a Shovel	GNU C++17	Accepted	15 ms	0 KB

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, r;
    cin >> n >> r;

    for (int i = 1; true; ++i)
        if (n * i % 10 == r || n * i % 10 == 0)
        {
            cout << i;
            return 0;
        }
}