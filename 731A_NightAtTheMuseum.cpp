//* 202469385	Apr/17/2023 17:14UTC+7	Minh4893IT	A - Night at the Museum	GNU C++17	Accepted	15 ms	0 KB

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