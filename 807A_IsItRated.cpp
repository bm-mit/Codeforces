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