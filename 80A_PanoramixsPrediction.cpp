//* 202606311	Apr/18/2023 19:57UTC+7	Minh4893IT	A - Panoramix's Prediction	GNU C++17	Accepted	30 ms	0 KB

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0)
            return false;
    return true;
}

int main()
{
    int n, m;
    cin >> n >> m;

    if (!isPrime(n))
    {
        cout << "NO";
        return 0;
    }

    for (int i = n + 1; i < m; ++i)
        if (isPrime(i))
        {
            cout << "NO";
            return 0;
        }

    if (isPrime(m))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}