#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (auto &elem : arr)
        cin >> elem;

    cout << arr[1] - arr.front() << ' ' << arr.back() - arr.front() << "\n";

    for (int i = 1; i < n - 1; ++i)
    {
        cout << min(abs(arr[i] - arr[i - 1]), abs(arr[i] - arr[i + 1])) << ' '
             << max(abs(arr[i] - arr.front()), abs(arr[i] - arr.back())) << "\n";
    }

    cout << arr.back() - arr[n - 2] << ' ' << arr.back() - arr.front();

    return 0;
}