//* 202614091	Apr/18/2023 21:02UTC+7	Minh4893IT	A - Good Number	GNU C++17	Accepted	15 ms	0 KB

#include <bits/stdc++.h>
using namespace std;

int n, k;
int result = 0;

string s;
void solve()
{
    getline(cin, s);
    vector<int> count(10);

    for (auto c : s)
        ++count[c - '0'];

    for (int i = 0; i <= k; ++i)
        if (!count[i])
            return;

    ++result;
}

int main()
{
    cin >> n >> k;
    getline(cin, s);

    while (n--)
        solve();

    cout << result;

    return 0;
}