#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int next = n;
    vector<pair<int, int>> arr(n);

    // first is value
    // second is index
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i].first;
        arr[i].second = i;
    }

    sort(arr.begin(), arr.end(), greater<pair<int, int>>());

    int idx = 0;
    for (int i = 0; i < n; ++i)
    {
        while (arr[idx].second <= i && idx < n)
            cout << arr[idx++].first << ' ';
        cout << endl;
    }

    return 0;
}