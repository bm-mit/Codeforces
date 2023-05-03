//* 201224300	Apr/08/2023 14:18UTC+7	Minh4893IT	A - Cheap Travel	GNU C++17	Accepted	15 ms	0 KB

#include <iostream>
using namespace std;

int main()
{
    int n, m, a, b;
    scanf("%d %d %d %d", &n, &m, &a, &b);

    double mp = b / m;
    if (mp >= a)
        printf("%d", a * n);
    else
    {
        printf("%d", n / m * b + min((n - n / m * m) * a, b));
    }

    return 0;
}