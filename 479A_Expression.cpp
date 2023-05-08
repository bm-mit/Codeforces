//* 195037797	Feb/26/2023 19:49UTC+7	Minh4893IT	A - Expression	GNU C++17	Accepted	15 ms	0 KB

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int res = 0;
    res = max(res, a + b + c);
    res = max(res, a + b * c);
    res = max(res, a * b + c);
    res = max(res, (a + b) * c);
    res = max(res, a * (b + c));
    res = max(res, a * b * c);

    cout << res;

    return 0;
}