//* 202780837	Apr/20/2023 13:04UTC+7	Minh4893IT	A - Case of the Zeros and Ones	GNU C++17	Accepted	62 ms	500 KB

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    getline(cin, s);

    int count[2] = {};
    for (auto c : s)
        ++count[c - '0'];
    
    cout << abs(count[0] - count[1]);

    return 0;
}