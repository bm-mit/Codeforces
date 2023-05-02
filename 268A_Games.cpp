//* 202595489	Apr/18/2023 18:19UTC+7	Minh4893IT	A - Games	GNU C++17	Accepted	30 ms	100 KB

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    unordered_map<int, int> home, away;

    for (int i = 0; i < n; ++i)
    {
        int h, a;
        cin >> h >> a;
        ++home[h];
        ++away[a];
    }

    int result = 0;
    for (auto p : home)
    {
        result += p.second * away[p.first];
    }

    cout << result;
}