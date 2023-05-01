#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (auto &elem : arr)
        cin >> elem;

    sort(arr.begin(), arr.end());

    int result = 0;
    for (int i = 1; i < n - 1; ++i)
        result += arr[i] != arr.front() && arr[i] != arr.back();
    cout << result;
}