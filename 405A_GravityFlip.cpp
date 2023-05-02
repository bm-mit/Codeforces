//* 200687969	Apr/04/2023 20:46UTC+7	Minh4893IT	A - Gravity Flip	GNU C++17	Accepted	15 ms	0 KB

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    int arr[105];
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
        scanf("%d", &arr[i]);
    sort(arr, arr + n);

    for (int i = 0; i < n; ++i)
        printf("%d ", arr[i]);

    return 0;
}