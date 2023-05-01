#include <iostream>
using namespace std;

int main()
{
    int N;
    int divisors[13] = { 4, 7, 44, 47, 77, 444, 447, 474, 477, 744, 747, 774, 777 };

    cin >> N;

    for (int divisor : divisors)
    {
        if (N % divisor == 0)
        {
            cout << "YES";
            return 0;
        }
        if (divisor > N)
            break;
    }

    cout << "NO";

    return 0;
}