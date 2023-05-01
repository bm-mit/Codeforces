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