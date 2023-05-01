//* 202921398	Apr/21/2023 12:44UTC+7	Minh4893IT	B - Lovely Palindromes	GNU C++17	Accepted	15 ms	300 KB

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    string s;
    getline(cin, s);

    cout << s;

    reverse(s.begin(), s.end());

    cout << s;

    return 0;
}
