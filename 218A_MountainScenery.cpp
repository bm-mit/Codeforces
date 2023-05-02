//* 202681654	Apr/19/2023 14:07UTC+7	Minh4893IT	A - Mountain Scenery	GNU C++17	Accepted	30 ms	0 KB

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> arr(2 * n + 1);
    cin >> arr[0];

    for (int i = 0; i < n; ++i)
    {
        int idx = 2 * i + 1;
        cin >> arr[idx] >> arr[idx + 1];
        int height = arr[idx] - 1;
        if (k && arr[idx - 1] < height && height > arr[idx + 1])
            --arr[idx], --k;
    }

    for (auto elem : arr)
        cout << elem << ' ';

    return 0;
}