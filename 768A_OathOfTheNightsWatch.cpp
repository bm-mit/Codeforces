//* 202570077	Apr/18/2023 13:21UTC+7	Minh4893IT	A - Oath of the Night's Watch	GNU C++17	Accepted	202 ms	400 KB

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