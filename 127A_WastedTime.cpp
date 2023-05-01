//* 202609853	Apr/18/2023 20:27UTC+7	Minh4893IT	A - Wasted Time	GNU C++17	Accepted	30 ms	0 KB

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int lastX, lastY;
    cin >> lastX >> lastY;

    double result = 0;
    for (int i = 1; i < n; ++i)
    {
        int currX, currY;
        cin >> currX >> currY;

        int absX = abs(currX - lastX);
        int absY = abs(currY - lastY);

        result += sqrt(absX * absX + absY * absY);
        
        lastX = currX;
        lastY = currY;
    }

    result = result / 50;
    printf("%.9f", result * k);
}