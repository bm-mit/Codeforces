//* 201263706	Apr/08/2023 20:53UTC+7	Minh4893IT	D - Remove Two Letters	GNU C++17	Accepted	46 ms	500 KB

#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int res;
        cin >> res;
        string s;
        cin >> s;

        res -= 1;
        for (int i = 1; i < s.length(); ++i)
            res -= s[i - 1] == s[i + 1];
        cout << res << endl;
    }

    return 0;
}