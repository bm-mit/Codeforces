//* 194441056	Feb/21/2023 17:30UTC+7	Minh4893IT	A - Watermelon	GNU C++17	Accepted	30 ms	0 KB

#include <iostream>
using namespace std;

int main()
{
    int weight;
    cin >> weight;

    cout << ((weight > 3 && weight % 2 == 0) ? "YES" : "NO");
}