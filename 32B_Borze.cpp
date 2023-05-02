//* 202241430	Apr/15/2023 19:43UTC+7	Minh4893IT	B - Borze	GNU C++17	Accepted	30 ms	0 KB

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