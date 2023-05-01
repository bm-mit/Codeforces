#include <iostream>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    int x, y, z;
    x = y = z = 0;
    for (int i = 0; i < n; ++i)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        x += a;
        y += b;
        c += c;
    }

    printf(x == y && y == z && z == 0 ? "YES" : "NO");

    return 0;
}