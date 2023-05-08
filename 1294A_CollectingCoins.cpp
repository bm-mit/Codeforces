//* 200667848	Apr/04/2023 17:36UTC+7	Minh4893IT	A - Collecting Coins	GNU C++17	Accepted	0 ms	0 KB

#include <iostream>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int a, b, c, n;
        scanf("%d %d %d %d", &a, &b, &c, &n);

        int v = (a + b + c + n) / 3;
        if ((a + b + c + n) % 3)
            printf("NO\n");
        else
            printf(a <= v && b <= v && c <= v ? "YES\n" : "NO\n");
    }

    return 0;
}