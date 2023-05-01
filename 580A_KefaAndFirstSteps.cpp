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