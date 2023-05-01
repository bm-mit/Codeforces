#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    if (t != 10)
    {
        cout << t;
        for (; --n;)
            cout << '0';
    }
    else
    {
        if (n <= 1)
            cout << -1;
        else
        {
            cout << 1;
            for (; --n;)
                cout << '0';
        }
    }
}