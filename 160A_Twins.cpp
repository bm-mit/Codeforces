#include <iostream>
#include <numeric>
#include <algorithm>
using namespace std;

int arr[105];

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; ++i)
        scanf("%d", &arr[i]);

    sort(arr, arr + n, greater<int>());


    int sum = accumulate(arr, arr + n, 0);

    int get = 0;
    int i = 0;
    while (get <= sum)
    {
        get += arr[i];
        sum -= arr[i];
        ++i;
    }

    printf("%d", i);

    return 0;
}