#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n + 1);
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 1));
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int result = 1;
    for (int i = 0; i < n; ++i)
    {
        int idx = i + 1;
        while (arr[idx-1] <= arr[idx] && arr[idx])
            ++idx;
        while (arr[idx-1] >= arr[idx] && arr[idx])
            ++idx;
        result = max(result, idx - i);
    }

    cout << result;


    return 0;
}