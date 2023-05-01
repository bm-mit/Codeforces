#include <iostream>
using namespace std;

using ll = long long int;

int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        ll n;
        cin >> n;
        cout << ((n > 2) ? n / 2 - (n % 2 == 0) : 0) << endl;
    }

    return 0;
}