//* 202784838	Apr/20/2023 14:06UTC+7	Minh4893IT	A - The New Year: Meeting Friends	GNU C++17	Accepted	15 ms	0 KB

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x[3];
    for (auto &elem : x)
        cin >> elem;
    
    sort(x, x + 3);
    cout << x[2] - x[0];

    return 0;
}