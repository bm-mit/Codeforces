//* 203128790	Apr/23/2023 16:07UTC+7	Minh4893IT	A - Bus to Udayland	GNU C++17	Accepted	30 ms	200 KB

#include <bits/stdc++.h>
using namespace std;

bool check(char c)
{
    return c == '|';
}

int main()
{
    string line;
    int n;
    getline(cin, line);
    stringstream stream(line);
    stream >> n;

    vector<vector<string>> arr(n, vector<string>(2));

    bool have = false;
    for (auto &elem : arr)
    {
        getline(cin, line);
        replace_if(line.begin(), line.end(), check, ' ');
        stringstream stream(line);
        stream >> elem[0] >> elem[1];
        if (!have && elem[0] == "OO")
        {
            elem[0] = "++";
            have = true;
        }
        if (!have && elem[1] == "OO")
        {
            elem[1] = "++";
            have = true;
        }
    }

    if (!have)
        cout << "NO";
    else
    {
        cout << "YES\n";
        for (auto elem : arr)
            cout << elem[0] << '|' << elem[1] << "\n";
    }
    return 0;
}