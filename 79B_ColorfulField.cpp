//* 202958896	Apr/21/2023 20:45UTC+7	Minh4893IT	B - Colorful Field	GNU C++17	Accepted	30 ms	0 KB

#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    int n, m, k, t;
    cin >> n >> m >> k >> t;

    vector<ll> indexes(k);

    for (int i = 0; i < k; ++i)
    {
        ll a, b;
        cin >> a >> b;
        --a, --b;
        indexes[i] = a * m + b;
    }

    sort(indexes.begin(), indexes.end());

    string plants[3] = {
        "Carrots\n",
        "Kiwis\n",
        "Grapes\n"};

    for (int i = 0; i < t; ++i)
    {
        ll a, b;
        cin >> a >> b;
        ll pos = (a - 1) * m + (b - 1);

        int low = 0;
        int high = k - 1;

        int last = -1;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (indexes[mid] == pos)
            {
                last = mid;
                break;
            }
            else if (indexes[mid] < pos)
            {
                last = mid;
                low = mid + 1;
            }
            else
                high = mid - 1;
        }

        if (last != -1)
        {
            if (indexes[last] == pos)
                cout << "Waste\n";
            else
            {
                ll idx = pos - last - 1;
                cout << plants[idx % 3];
            }
        }
        else
        {
            cout << plants[pos % 3];
        }
    }

    return 0;
}