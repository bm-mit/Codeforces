//* 201949952	Apr/13/2023 21:24UTC+7	Minh4893IT	A - Make it Beautiful	GNU C++17	Accepted	31 ms	100 KB

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &elem : arr)
        cin >> elem;

    sort(arr.begin(), arr.end(), greater<int>());

    if (arr[1] == arr[0])
        swap(arr[n - 1], arr[1]);

    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == sum)
        {
            cout << "NO\n";
            return;
        }
        sum += arr[i];
    }

    cout << "YES\n";
    for (auto &elem : arr)
        cout << elem << ' ';
    cout << "\n";
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