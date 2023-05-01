//* 203227815	Apr/24/2023 16:10UTC+7	Minh4893IT	A - Second Order Statistics	GNU C++17	Accepted	30 ms	100 KB

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    set<int> s;

    for (int i = 0; i < n; ++i)
    {
        int t;
        cin >> t;
        s.insert(t);
    }

    if (s.size() >= 2)
    {
        auto p = s.begin();
        advance(p, 1);
        cout << *p;
    }
    else
        cout << "NO";

    return 0;
}