//* 202493512	Apr/17/2023 20:19UTC+7	Minh4893IT	A - Shaass and Oskols	GNU C++17	Accepted	30 ms	0 KB

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n + 2);
    for (int i = 1; i <= n; ++i)
        cin >> arr[i];

    int m;
    cin >> m;
    while (m--)
    {
        int x, y;
        cin >> x >> y;
        arr[x - 1] += y - 1;
        arr[x + 1] += arr[x] - y;
        arr[x] = 0;
    }

    for (int i = 1; i <= n; ++i)
        cout << arr[i] << "\n";

    return 0;
}