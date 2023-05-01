#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> teams[3];

    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        int temp;
        cin >> temp;
        teams[temp-1].push_back(i);
    }

    cout << min(teams[0].size(), min(teams[1].size(), teams[2].size())) << "\n";

    while (teams[0].size() && teams[1].size() && teams[2].size())
    {
        cout << teams[0].back() << ' ' << teams[1].back() << ' ' << teams[2].back() << "\n";
        teams[0].pop_back();
        teams[1].pop_back();
        teams[2].pop_back();
    }


    return 0;
}