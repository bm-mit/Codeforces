#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (!b)
        return a;
    return gcd(b, a % b);
}

int main()
{
    int a, b;
    cin >> a >> b;
    a = max(a, b);
    a = 6 - a + 1;

    int t = gcd(a, 6);
    a /= t;
    cout << a << '/' << 6 / t;

    return 0;
}