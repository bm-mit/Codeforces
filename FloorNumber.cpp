#include <iostream>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int id, x;
        scanf("%d %d", &id, &x);

        if (id <= 2)
            printf("1\n");
        else
        {
            printf("%d\n", (id - 2) / x + ((id - 2) % x != 0) + 1);
        }
    }
}