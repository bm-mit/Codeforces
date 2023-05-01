#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int a[3];
        scanf("%d %d %d", &a[0], &a[1], &a[2]);
        sort(a, a + 3);

        printf("%d\n", a[1]);
    }

    return 0;
}