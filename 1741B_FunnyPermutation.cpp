//* 202368911	Apr/16/2023 20:04UTC+7	Minh4893IT	B - Funny Permutation	GNU C++17	Accepted	46 ms	0 KB

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n == 3)
    {
        cout << "-1\n";
        return;
    }

    // for (int i = 0; i < n / 2; ++i)
    // {
    //     if (i * 2 + 1 != n - i * 2 - 1)
    //         cout << n - i * 2 - 1 << " ";
    //     else
    //         break;

    //     if (i * 2 + 2 != n - i * 2)
    //         cout << n - i * 2 << " ";
    //     else
    //         break;
    // }
    // cout << "\n";
    cout << n << " " << n - 1 << " ";
    for (int i = 1; i <= n - 2; ++i)
        cout << i << ' ';
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
        solve();
}