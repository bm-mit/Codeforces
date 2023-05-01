//* 202967693	Apr/21/2023 22:29UTC+7	Minh4893IT	B - Keyboard	GNU C++17	Accepted	93 ms	2100 KB

#include <bits/stdc++.h>
using namespace std;

string line;

int main()
{
    getline(cin, line);
    int n, m, x;
    stringstream stream(line);
    stream >> n >> m >> x;

    unordered_map<char, vector<pair<int, int>>> keys;
    unordered_map<char, bool> have;

    for (int i = 0; i < n; ++i)
    {
        getline(cin, line);
        for (int j = 0; j < line.size(); ++j)
        {
            keys[line[j]].push_back(make_pair(i, j));
            have[line[j]] = true;
        }
    }

    getline(cin, line);
    getline(cin, line);
    x *= x;

    unordered_map<char, int> appear;
    for (auto c : line)
        ++appear[c];


    int count = 0;
    for (auto pai : appear)
    {
        char c = pai.first;
        int times = pai.second;
        if (!have[tolower(c)])
        {
            cout << "-1";
            return 0;
        }

        if (isupper(c))
        {
            if (!have['S'])
            {
                cout << "-1";
                return 0;
            }

            int dist = INT_MAX;
            for (auto cPos : keys[tolower(c)])
            {
                for (auto SPos : keys['S'])
                {

                    int xDist = cPos.first - SPos.first;
                    int yDist = cPos.second - SPos.second;

                    dist = min(dist, xDist * xDist + yDist * yDist);
                }
            }

            if (dist > x)
                count += times;
        }
    }

    cout << count;

    return 0;
}