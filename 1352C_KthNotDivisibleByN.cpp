//* 201226699	Apr/08/2023 14:40UTC+7	Minh4893IT	C - K-th Not Divisible by n	GNU C++17	Accepted	15 ms	0 KB

#include <iostream>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", (b - 1) / (a - 1) + b);
    }

    return 0;
}