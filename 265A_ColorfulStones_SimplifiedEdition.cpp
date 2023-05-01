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