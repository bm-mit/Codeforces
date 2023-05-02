//* 201260606	Apr/08/2023 20:22UTC+7	Minh4893IT	A - YES or YES?	GNU C++17	Accepted	15 ms	0 KB

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        transform(s.begin(), s.end(), s.begin(), ::toupper);

        if (s == "YES")
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}