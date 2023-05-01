#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r1, r2, c1, c2, d1, d2;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;

    int a, b, c, d;

    for (a = 1; a <= 9; ++a)
    {
        b = r1 - a;
        c = c1 - a;
        d = d1 - a;
        if (c + d == r2)
            if (b + d == c2)
                if (b + c == d2)
                    if (1 <= b && b <= 9)
                        if (1 <= c && c <= 9)
                            if (1 <= d && d <= 9)
                                if (a != b && a != c && a != d)
                                    if (b != c && b != d && c != d)
                                    {
                                        cout << a << ' ' << b << "\n";
                                        cout << c << ' ' << d;
                                        return 0;
                                    }
    }

    cout << -1;

    return 0;
}