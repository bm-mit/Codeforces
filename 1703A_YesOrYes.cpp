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