//* 200690059	Apr/04/2023 21:05UTC+7	Minh4893IT	A - Kefa and First Steps	GNU C++17	Accepted	31 ms	0 KB

#include <iostream>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    int last = 0;
    int result = 0;
    int curr = 0;
    for (int i = 0; i < n; ++i)
    {
        int temp;
        scanf("%d", &temp);
        if (temp < last)
        {
            result = max(result, curr);
            curr = 0;
        }
        last = temp;
        ++curr;
    }
    result = max(result, curr);

    printf("%d", result);


    return 0;
}