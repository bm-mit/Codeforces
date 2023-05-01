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