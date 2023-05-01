//* 202883833	Apr/20/2023 23:48UTC+7	Minh4893IT	B - Coins	GNU C++17	Accepted	30 ms	0 KB

#include <bits/stdc++.h>
using namespace std;

int main()

{
    string inq[3];
    for (auto &elem : inq)
        getline(cin, elem);

    sort(inq, inq + 3);

    int a = 0, b = 0, c = 0;
    for (int i = 0; i < 3; ++i)
    {
        string pref = inq[i].substr(0, 2);
        string suff = inq[i].substr(1, 2);
        if (pref == "A>")
            ++a;
        else if (pref == "B>")
            ++b;
        else if (pref == "C>")
            ++c;

        if (suff == "<A")
            ++a;
        else if (suff == "<B")
            ++b;
        else if (suff == "<C")
            ++c;
    }

    if (a == b || b == c || c == a)
    {
        cout << "Impossible";
        return 0;
    }

    vector<pair<int, char>> result = {
        {a, 'A'},
        {b, 'B'},
        {c, 'C'}};

    sort(result.begin(), result.end());

    for (auto p : result)
        cout << p.second;

    return 0;
}