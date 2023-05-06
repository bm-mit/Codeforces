//* 202598692	Apr/18/2023 18:48UTC+7	Minh4893IT	A - Arpa’s hard exam and Mehrdad’s naive cheat	GNU C++17	Accepted	15 ms	0 KB

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    if (n == 0)
        cout << 1;
    else
    {
        n = (n - 1) % 4 + 1;
        cout << (int)pow(8, n) % 10;
    }
}