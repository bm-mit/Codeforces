//* 202888401	Apr/21/2023 00:29UTC+7	Minh4893IT	B - Effective Approach	GNU C++17	Accepted	966 ms	800 KB

#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    int n;
    cin >> n;

    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i].first;
        arr[i].second = i + 1;
    }

    sort(arr.begin(), arr.end());

    ll fromLeft = 0, fromRight = 0;
    int m;
    cin >> m;
    while (m--)
    {
        int query;
        cin >> query;

        int low = 0;
        int high = n - 1;

        int first = -1;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (arr[mid].first == query)
            {
                first = arr[mid].second;
                high = mid - 1;
            }
            if (arr[mid].first > query)
                high = mid - 1;
            else
                low = mid + 1;
        }

        int second = -1;
        low = 0;
        high = n - 1;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (arr[mid].first == query)
            {
                second = arr[mid].second;
                low = mid + 1;
            }
            if (arr[mid].first > query)
                high = mid - 1;
            else
                low = mid + 1;
        }

        fromLeft += first;
        fromRight += n - second + 1;
    }

    cout << fromLeft << ' ' << fromRight;

    return 0;
}