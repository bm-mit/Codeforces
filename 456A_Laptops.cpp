#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<pair<int, int>> arr(n);
    for (auto &p : arr)
        cin >> p.first >> p.second;

    sort(arr.begin(), arr.end());

    for (int i = 1; i < n; ++i)
    {
        if (arr[i].second < arr[i-1].second)
        {
            cout << "Happy Alex";
            return 0;
        }
    }

    cout << "Poor Alex";

    return 0;
}