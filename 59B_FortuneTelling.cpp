#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    int odd = 0;
    for (auto &elem : arr)
    {
        scanf("%d", &elem);
        odd += elem & 1;
    }

    int lastOdd = 10000;
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] & 1)
            lastOdd = min(lastOdd, arr[i]);
        sum += arr[i];
    }

    if (odd == 0)
    {
        printf("0");
        return 0;
    }
    if (sum % 2 == 0 && lastOdd != 10000)
        sum -= lastOdd;
    printf("%d", sum & 1 ? sum : 0);

    return 0;
}