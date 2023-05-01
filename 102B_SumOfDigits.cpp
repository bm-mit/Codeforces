//* 202821895	Apr/20/2023 21:11UTC+7	Minh4893IT	B - Caisa and Pylons	GNU C++17	Accepted	140 ms	400 KB

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string num;
    getline(cin, num);

    int result = 0;
    while (num.length() > 1)
    {
        int sum = 0;
        for (auto c : num)
            sum += c - '0';
        num = to_string(sum);
        ++result;
    }

    cout << result;

    return 0;
}