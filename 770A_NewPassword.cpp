//* 202558609	Apr/18/2023 10:15UTC+7	Minh4893IT	A - New Password	GNU C++17	Accepted	15 ms	0 KB

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    while (n)
        for (int i = 0; i < k && n; ++i)
        {
            cout << char(i + 'a');
            --n;
        }
}