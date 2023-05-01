#include <iostream>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
    {
        printf(i % 2 ? "I hate " : "I love ");
        printf(i == n ? "it " : "that ");
    }

    return 0;
}