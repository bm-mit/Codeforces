//* 200673022	Apr/04/2023 18:30UTC+7	Minh4893IT	A - Vanya and Cubes	GNU C++17	Accepted	15 ms	0 KB

#include <iostream>
using namespace std;

int main()
{
    int h = 0, c = 0, n;
    scanf("%d", &n);
    while (c <= n)
    {
        ++h;
        c += h * (h + 1) / 2;
    }
    printf("%d", h - 1);

    return 0;
}