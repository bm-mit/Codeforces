#include <iostream>
#include <algorithm>
using namespace std;

int t;

int main()
{
    scanf("%d\n", &t);

    int n;
    int arr[55];
    while (t--)
    {
        scanf("%d\n", &n);
        for (int i = 0; i < n; ++i)
            scanf("%d", &arr[i]);
        sort(arr, arr + n);

        bool ac = true;
        for (int i = 1; i < n; ++i)
            if (arr[i] - arr[i-1] > 1)
            {
                ac = false;
                break;
            }
        if (ac)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}