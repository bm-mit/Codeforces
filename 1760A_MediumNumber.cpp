//* 201211658	Apr/08/2023 11:47UTC+7	Minh4893IT	A - Medium Number	GNU C++17	Accepted	15 ms	0 KB

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