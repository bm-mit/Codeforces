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