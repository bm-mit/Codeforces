#include <iostream>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int res = 0;
        int i = 1;
        int lv = 10;
        while (lv - 1 <= n)
        {
            res += 9;
            i = i * 10 + 1;
            lv *= 10;
        }
        printf("%d\n", res + n / i);
    }

    return 0;
}