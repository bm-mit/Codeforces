//* 200688387	Apr/04/2023 20:50UTC+7	Minh4893IT	A - Hulk	GNU C++17	Accepted	15 ms	0 KB

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