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