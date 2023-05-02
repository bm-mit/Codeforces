//* 201838983	Apr/12/2023 20:54UTC+7	Minh4893IT	B - Grab the Candies	GNU C++17	Accepted	31 ms	0 KB

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int oddSum = 0, evenSum = 0;
    while (n--)
    {
        int temp;
        cin >> temp;
        if (temp & 1)
            evenSum += temp;
        else
            oddSum += temp;
    }

    cout << (oddSum > evenSum ? "YES" : "NO") << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}