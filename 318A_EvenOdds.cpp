//* 200686106	Apr/04/2023 20:30UTC+7	Minh4893IT	A - Even Odds	GNU C++17	Accepted	30 ms	0 KB

#include <iostream>
using namespace std;
using ll = long long int;

int main()
{
    ll n, k;
    scanf("%I64d %I64d", &n, &k);

    if (k <= n / 2 + n % 2)
        printf("%lld", k * 2 - 1);
    else
        printf("%lld", (k - n / 2 - n % 2) * 2);

    return 0;
}