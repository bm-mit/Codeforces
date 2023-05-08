//* 200582033	Apr/03/2023 22:21UTC+7	Minh4893IT	A - Design Tutorial: Learn from Math	GNU C++17	Accepted	15 ms	1200 KB

#include <iostream>
#include <vector>
using namespace std;

vector<bool> isPrime(10000005, true);
int n;
void primes() {
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= n; ++i)
        if (isPrime[i])
            for (int j = i * i; j <= n; j += i)
                isPrime[j] = false;
}

int main()
{
    scanf("%d", &n);
    primes();

    for (int i = 4; i < n; ++i)
        if (!isPrime[i] && !isPrime[n - i])
        {
            cout << i << ' ' << n - i;
            break;
        }

    return 0;
}