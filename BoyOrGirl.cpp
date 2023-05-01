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