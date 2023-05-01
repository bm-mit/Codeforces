#include <iostream>
using namespace std;

int main()
{
    string number;
    cin >> number;

    int numOfLuckyDigits = 0;
    for (char chr : number)
        numOfLuckyDigits += chr == '4' || chr == '7';

    cout << ((numOfLuckyDigits == 4 || numOfLuckyDigits == 7) ? "YES" : "NO");

    return 0;
}