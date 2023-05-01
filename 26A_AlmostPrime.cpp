#include <bits/stdc++.h>
using namespace std;

vector<bool> isPrime(3005, true);

void prime()
{
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= 3005; ++i)
        if (isPrime[i])
            for (int j = i * i; j <= 3005; j += i)
                isPrime[j] = false;
}

bool analyze(int n)
{
    unordered_set<int> primeFactors;

    int idx = 2;
    while (n > 1)
    {
        if (!isPrime[idx] || n % idx)
        {
            ++idx;
            continue;
        }

        primeFactors.insert(idx);
        n /= idx;

        if (primeFactors.size() > 2)
            return false;
    }

    return primeFactors.size() == 2;
}

int main()
{
    int n;
    scanf("%d", &n);

    prime();

    int result = 0;
    for (int i = 6; i <= n; ++i)
        result += analyze(i);

    printf("%d", result);

    return 0;
}