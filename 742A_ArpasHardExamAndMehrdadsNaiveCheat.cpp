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