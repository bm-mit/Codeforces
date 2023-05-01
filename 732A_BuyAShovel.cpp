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