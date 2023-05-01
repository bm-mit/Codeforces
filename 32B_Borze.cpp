#include <bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cin >> s;

    string result;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == '.')
            result += '0';
        else if (s[++i] == '.')
            result += '1';
        else
            result += '2';
    }

    cout << result << endl;

    return 0;
}