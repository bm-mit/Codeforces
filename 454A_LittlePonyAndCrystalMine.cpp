//* 202788156	Apr/20/2023 14:59UTC+7	Minh4893IT	A - Little Pony and Crystal Mine	GNU C++17	Accepted	15 ms	0 KB

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; 
    cin >> n;

    for (int i = 0; i < n / 2; ++i)
    {
        for (int j = 0; j < n / 2 - i; ++j)
            cout << '*';
        for (int j = 0; j < i * 2 + 1; ++j)
            cout << 'D';
        for (int j = 0; j < n / 2 - i; ++j)
            cout << '*';
        cout << endl;
    }
    
    for (int i = n / 2; i >= 0; --i)
    {
        for (int j = 0; j < n / 2 - i; ++j)
            cout << '*';
        for (int j = 0; j < i * 2 + 1; ++j)
            cout << 'D';
        for (int j = 0; j < n / 2 - i; ++j)
            cout << '*';
        cout << endl;
    }

    return 0;
}