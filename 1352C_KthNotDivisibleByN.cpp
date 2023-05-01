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