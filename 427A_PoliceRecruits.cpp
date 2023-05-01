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