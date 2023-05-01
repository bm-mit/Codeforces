//* 202821895	Apr/20/2023 21:11UTC+7	Minh4893IT	B - Caisa and Pylons	GNU C++17	Accepted	140 ms	400 KB

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n + 1);
    for (int i = 1; i <= n; ++i)
        cin >> arr[i];

    cout << *max_element(arr.begin(), arr.end());

    return 0;
}