//* 202928370	Apr/21/2023 13:56UTC+7	Minh4893IT	810B - Summer sell-off	GNU C++17	Accepted	529 ms	1600 KB

#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

bool comp(pair<ll, ll> a, pair<ll, ll> b)
{
    return min(a.first * 2, a.second) - min(a.first, a.second) > min(b.first * 2, b.second) - min(b.first, b.second);
}

int main()
{
    ll n, f;
    cin >> n >> f;

    vector<pair<ll, ll>> arr(n);
    for (auto &elem : arr)
        cin >> elem.first >> elem.second;

    sort(arr.begin(), arr.end(), comp);

    long long result = 0;
    for (ll i = 0; i < n; ++i)
        if (i < f)
            result += min(arr[i].first * 2, arr[i].second);
        else
            result += min(arr[i].first, arr[i].second);

    cout << result;

    return 0;
}
