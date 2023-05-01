//* 203008088	Apr/22/2023 12:01UTC+7	Minh4893IT	B - Students and Shoelaces	GNU C++17	Accepted	62 ms	400 KB

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<unordered_set<int>> members(n + 1);

    for (int i = 0; i < m; ++i)
    {
        int a, b;
        cin >> a >> b;
        members[a].insert(b);
        members[b].insert(a);
    }

    int result = 0;
    for (int i = 0; i < m; ++i)
    {
        unordered_map<int, bool> deleted = {};
        bool cont = false;
        for (int member = 1; member <= n; ++member)
            if (members[member].size() == 1 && !deleted[member])
            {
                cont = true;
                deleted[*members[member].begin()] = true;
                members[*members[member].begin()].erase(member);
                members[member].clear();
            }
        result += cont;
        if (!cont)
            break;
    }

    cout << result;

    return 0;
}