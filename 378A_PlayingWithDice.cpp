//* 203392198	Apr/25/2023 10:59UTC+7	Minh4893IT	A - Playing with Dice	GNU C++17	Accepted	15 ms	0 KB

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if (a == b)
    {
        cout << "0 6 0";
        return 0;
    }

    int s = a + b;
    int draw = s % 2 == 0;

    int p1w = s / 2 - draw;
    int p2w = 6 - p1w - draw;

    if (a > b)
        swap(p1w, p2w);

    cout << p1w << ' ' << draw << ' ' << p2w;

    return 0;
}