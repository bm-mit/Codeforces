#include <bits/stdc++.h>
using namespace std;

bool valid(int x, int y, int n, int m)
{
    return (1 <= x && x <= n) && (1 <= y && y <= m);
}

int count(int x, int y, int n, int m)
{
    int res = valid(x - 1, y, n, m);
    res += valid(x + 1, y, n, m);
    res += valid(x, y - 1, n, m);
    res += valid(x, y + 1, n, m);
    return res;
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        cout << min(count(x1, y1, n, m), count(x2, y2, n, m)) << endl;
    }
}