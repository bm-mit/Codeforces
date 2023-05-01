//* 202690761	Apr/19/2023 16:31UTC+7	Minh4893IT	296A - Yaroslav and Permutations	GNU C++17	Accepted	30 ms	100 KB

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    unordered_map<int, int> count;
    int maxi = n / 2 + n % 2;
    while (n--)
    {
        int temp;
        cin >> temp;
        ++count[temp];
    }

    for (auto p : count)
        if (p.second > maxi)
        {
            cout << "NO";
            return 0;
        }

    cout << "YES";

    return 0;
}