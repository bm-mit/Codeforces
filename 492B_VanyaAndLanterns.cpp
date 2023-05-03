//* 201223698	Apr/08/2023 14:12UTC+7	Minh4893IT	B - Vanya and Lanterns	GNU C++17	Accepted	31 ms	0 KB

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, l;
    scanf("%d %d", &n, &l);
    vector<long long> arr(n + 1, 0);
    for (int i = 1; i <= n; ++i)
        scanf("%d", &arr[i]);

    sort(arr.begin(), arr.end());

    long long result = max(arr[1], l - arr[n]) * 2;
    for (int i = 1; i <= n; ++i)
        result = max(result, arr[i] - arr[i - 1]);

    printf("%f", (double)result / 2);

    return 0;
}