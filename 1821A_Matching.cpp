//* 202843383	00:28:35	Minh4893IT	A - Matching	GNU C++17	Accepted	77 ms	0 KB

#include <bits/stdc++.h>
using namespace std;

string line;

void solve()
{
    cin >> line;

    if (line[0] == '0')
    {
        cout << 0 << endl;
        return ;
    }
    
    while (line.size() && line[0] == '0')
        line = line.substr(1, line.size() - 1);
    
    int result = 1;
    if (line.size() && line[0] == '?')
        result = 9;
    for (int i = 1; i < line.size(); ++i)
        if (line[i] == '?')
            result *= 10;
    
    if (result != 1)
        cout << result << endl;
    else
        cout << 1 << endl;

}

int main()
{
    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}