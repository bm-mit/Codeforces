#include <bits/stdc++.h>
using namespace std;

int count(int n)
{
    int result = 0;
    while (n % 2 == 0)
    {
        ++result;
        n /= 2;
    }
    return result;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; ++i)
    {
        int temp;
        cin >> temp;

        arr.push_back(count(temp));
    }

    int result = max(*min_element(arr.begin(), arr.end()) - 1, 0);
    for (auto elem : arr)
        result += elem > 0;

    cout << result << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}