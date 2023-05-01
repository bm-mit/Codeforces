#include <bits/stdc++.h>
#define all(x) (x.begin(), x.end())
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> arr(m);
    for (auto &p : arr)
        cin >> p.second >> p.first;
    
    sort(arr.begin(), arr.end());

    int result = 0;
    while (n && arr.size())
    {
        int m = min(n, arr.back().second);
        result += m * arr.back().first;
        n -= m;
        arr.pop_back();
    }

    cout << result;

    return 0;
}