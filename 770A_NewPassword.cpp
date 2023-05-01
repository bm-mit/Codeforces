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