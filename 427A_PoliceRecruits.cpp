//* 202468359	Apr/17/2023 17:01UTC+7	Minh4893IT	A - Police Recruits	GNU C++17	Accepted	93 ms	400 KB

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    int curr = 0;
    int result = 0;

    for (int i = 0; i < n; ++i)
    {
        int occur;
        cin >> occur;
        curr += occur;

        if (curr < 0)
            result = max(result, -curr);
    }

    cout << result;
}