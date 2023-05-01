#include <bits/stdc++.h>
using namespace std;

unordered_map<int, int> appear;

bool check(int n)
{
    if (n == 1)
    {
        if (appear[n])
        {
            --appear[n];
            return true;
        }
        return false;
    }

    if (appear[n])
    {
        --appear[n];
        return true;
    }

    return check(n / 2) && check(n / 2);
}

void solve()
{
    appear = unordered_map<int, int>();

    int n;
    cin >> n;
    while (n --)
    {
        int temp;
        cin >> temp;
        ++appear[temp];
    }

    cout << (check(2048) ? "YES\n" : "NO\n");
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}