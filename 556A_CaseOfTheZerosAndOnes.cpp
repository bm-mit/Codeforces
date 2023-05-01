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