//* 195138625	Feb/27/2023 21:30UTC+7	Minh4893IT	A - Football	GNU C++17	Accepted	30 ms	0 KB

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> teams;
    unordered_map<string, int> goals;

    while (n--)
    {
        string name;
        cin >> name;

        if (!goals[name])
            teams.push_back(name);
        ++goals[name];
    }

    string winner;
    for (auto team : teams)
    {
        if (goals[winner] < goals[team])
            winner = team;
    }

    cout << winner;

    return 0;
}