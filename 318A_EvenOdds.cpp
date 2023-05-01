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