//* 202471195	Apr/17/2023 17:34UTC+7	Minh4893IT	A - Colorful Stones (Simplified Edition)	GNU C++17	Accepted	30 ms	0 KB

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string ins, stones;
    getline(cin, stones);
    getline(cin, ins);

    int result = 0;
    int i = 0;
    for (auto c : ins)
        if (c == stones[result])
            ++result;

    cout << result + 1;
}