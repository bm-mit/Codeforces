//* 200582708	Apr/03/2023 22:27UTC+7	Minh4893IT	A - Calculating Function	GNU C++17	Accepted	15 ms	0 KB

#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    long long n, a;
    cin >> n;
    if(n % 2 == 0) a = n / 2;
    else a = ((n + 1) / 2) * (-1);
    cout << a << endl;
    return 0;
}