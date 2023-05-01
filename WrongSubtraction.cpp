#include <iostream>
using namespace std;

int main()
{
    int num, subtractionTime;
    cin >> num >> subtractionTime;

    while (subtractionTime--)
    {
        if (num % 10)
            --num;
        else
            num /= 10;
    }

    cout << num;

    return 0;
}