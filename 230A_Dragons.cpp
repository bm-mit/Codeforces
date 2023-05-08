//* 205046332	May/08/2023 12:53UTC+7	Minh4893IT	A - Dragons	GNU C++14	Accepted	30 ms	0 KB

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int strength, n;

    cin >> strength >> n;

    array<pair<int, int>, 1005> arr;

    for (int i = 0; i < n; ++i)
        cin >> arr[i].first >> arr[i].second;
    
    sort(arr.begin(), arr.begin() + n);

    for (int i = 0; i < n; ++i)
    {
        if (strength <= arr[i].first)
        {
            cout << "NO";
            return 0;
        }
        strength += arr[i].second;
    }

    cout << "YES";

    return 0;
}