//* 202720718	Apr/19/2023 21:27UTC+7	Minh4893IT	A - BowWow and the Timetable	GNU C++17	Accepted	15 ms	0 KB

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);


    int l = s.length() - 1;
    int missed = l / 2;

    for (int i = 1; i < s.length(); ++i)
    {
        if (s[i] != '0')
        {
            cout << missed + 1;
            return 0;
        }
    }

    cout << missed + l % 2;

    return 0;
}