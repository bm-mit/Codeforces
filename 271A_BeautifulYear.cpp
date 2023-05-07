//* 194578041	Feb/22/2023 21:23UTC+7	Minh4893IT	A - Beautiful Year	GNU C++17	Accepted	30 ms	0 KB

#include <iostream>
using namespace std;

bool isBeautifulYear(int year)
{
    bool mark[10] = {};
    while (year)
    {
        if (mark[year % 10])
            return false;
        mark[year % 10] = true;
        year /= 10;
    }
    return true;
}

int main()
{
    int year;
    cin >> year;

    do
    {
        ++year;
    } while (!isBeautifulYear(year));

    cout << year;

    return 0;
}