//* 194458868	Feb/21/2023 20:25UTC+7	Minh4893IT	A - Boy or Girl	GNU C++17	Accepted	30 ms	100 KB

#include <iostream>
#include <set>
using namespace std;

int main()
{
    cin.tie(NULL);

    string line;
    cin >> line;

    set<char> chrs;
    for (auto chr : line)
        chrs.insert(chr);

    cout << ((chrs.size() % 2) ? "IGNORE HIM!" : "CHAT WITH HER!");

    return 0;
}