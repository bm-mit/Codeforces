#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c;
    cin >> c;

    if (c >= '5')
        if (c == '9')
            cout << c;
        else
            cout << 9 - (c - '0');
    else
        cout << c;

    string s;
    getline(cin, s);

    for (auto c : s)
        if (c - '0' >= 5)
            cout << 9 - (c - '0');
        else
            cout << c;

    return 0;
}