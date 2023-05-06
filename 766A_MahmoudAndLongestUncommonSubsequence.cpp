//* 202560034	Apr/18/2023 10:41UTC+7	Minh4893IT	A - Mahmoud and Longest Uncommon Subsequence	GNU C++17	Accepted	31 ms	400 KB

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