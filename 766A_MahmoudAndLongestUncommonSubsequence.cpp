#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    getline(cin, a);
    getline(cin, b);

    if (a == b)
    {
        cout << -1;
        return 0;
    }

    cout << max(a.length(), b.length());

    return 0;
}