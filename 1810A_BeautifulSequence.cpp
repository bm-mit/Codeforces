//* 200577684	Apr/03/2023 21:43UTC+7	Minh4893IT	A - Beautiful Sequence	GNU C++17	Accepted	31 ms	0 KB

#include <iostream>
using namespace std;

int t;
int n;

int main()
{
    scanf("%d\n", &t);

    // cout << boolalpha;

    while (t--)
    {
        scanf("%d\n", &n);
        int temp;
        bool ac = false;
        for (int i = 1; i <= n; ++i)
        {
            scanf("%d", &temp);
            if (temp <= i && temp <= n)
            {
                ac = true;
            }
        }
        if (ac)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}