//* 202571491	Apr/18/2023 13:41UTC+7	Minh4893IT	A - Is it rated?	GNU C++17	Accepted	15 ms	0 KB

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int last = 4126;
    bool maybe = true;
    for (int i = 0; i < n; ++i)
    {
        int a, b;
        cin >> a >> b;
        if (a != b)
        {
            cout << "rated";
            return 0;
        }
        if (a > last)
            maybe = false;
        last = min(last, a);
    }
    cout << (maybe ? "maybe" : "unrated");
}