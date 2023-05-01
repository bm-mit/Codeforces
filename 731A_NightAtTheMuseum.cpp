#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    char curr = 'a';
    int result = 0;
    for (auto c : s)
    {
        result += min(26 - abs(c - curr), abs(c - curr));
        curr = c;
    }

    cout << result;

    return 0;
}