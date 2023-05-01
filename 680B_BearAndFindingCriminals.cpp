//* 202816321	Apr/20/2023 20:15UTC+7	Minh4893IT	B - Bear and Finding Criminals	GNU C++17	Accepted	15 ms	0 KB

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a;

    cin >> n >> a;
    vector<int> arr(n + 1);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int result = 0;
    --a;

    for (int i = 0; i < n; ++i)
    {
        int j = a - (i - a);
        if (arr[i])
            result += j < 0 || j >= n || (arr[i] == arr[j]);
    }

    cout << result;

    return 0;
}