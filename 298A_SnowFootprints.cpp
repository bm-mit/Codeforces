//* 202718555	Apr/19/2023 21:10UTC+7	Minh4893IT	A - Snow Footprints	GNU C++17	Accepted	30 ms	100 KB

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string road;
    getline(cin, road);
    getline(cin, road);

    // int start = 0;
    // while (road[start] == '.')
    //     ++start;

    // int stop = start + 1;
    // if (road[start] == 'R')
    // {
    //     while (road[stop] == 'R')
    //         ++stop;
    //     cout << start + 1 << ' ' << stop + (road[stop] == '.');
    // }
    // else
    // {
    //     while (road[stop] == 'L')
    //         ++stop;
    //     cout << stop + (road[stop] == '.') << ' ' << start + 1;
    // }

    vector<int> left, right;
    for (int i = 0; i < road.length(); ++i)
        if (road[i] == 'L')
            left.push_back(i + 1);
        else if (road[i] == 'R')
            right.push_back(i + 1);

    if (left.size() && right.size())
    {
        cout << right.front() << ' ' << right.back();
    }
    else if (left.size())
    {
        cout << left.back() << ' ' << left.front() - 1;
    }
    else 
        cout << right.front() << ' ' << right.back() + 1;

    return 0;
}