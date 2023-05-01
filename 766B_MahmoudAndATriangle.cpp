//* 203006581	Apr/22/2023 11:34UTC+7	Minh4893IT	B - Mahmoud and a Triangle	GNU C++17	Accepted	187 ms	400 KB

#include <bits/stdc++.h>
using namespace std;

bool isTriangle(int a, int b, int c)
{
    return a + b > c && b + c > a && a + c > b;
}

int main()
{
    int n;
    cin >> n;
    vector<int> segments(n);
    for (auto &elem: segments)
        cin >> elem;
    
    sort(segments.begin(), segments.end());

    for (int i = 0; i <= n - 3; ++i)
        if (isTriangle(segments[i], segments[i+1], segments[i+2]))
        {
            cout << "YES";
            return 0;
        }

    cout << "NO";
    return 0;
}