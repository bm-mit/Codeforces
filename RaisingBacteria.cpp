#include <iostream>
using namespace std;

int main()
{
    long long int n;
    cin >> n;

    int res = 0;
    while (n)
    {
        res += n % 2;
        n /= 2;
    }

    cout << res;

    return 0;
}