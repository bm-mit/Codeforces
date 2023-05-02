//* 201411534	Apr/09/2023 10:41UTC+7	Minh4893IT	A - Garland	GNU C++17	Accepted	15 ms	0 KB

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int arr[10] = {};
    for (auto c : s)
        ++arr[c - '0'];

    int m = *max_element(arr, arr + 10);
    if (m == 4)
        cout << -1 << "\n";
    else if (m == 3)
        cout << 6 << "\n";
    else
        cout << 4 << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}