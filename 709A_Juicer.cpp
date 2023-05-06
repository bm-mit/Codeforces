//* 202495426	Apr/17/2023 20:34UTC+7	Minh4893IT	A - Juicer	GNU C++17	Accepted	171 ms	0 KB

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, b, d;
    cin >> n >> b >> d;
    
    int curr = 0;
    int result = 0;
    for (int i = 0; i < n; ++i)
    {
        int temp;
        cin >> temp;
        if (temp <= b)
        {
            curr += temp;
            if (curr > d)
            {
                curr = 0;
                ++result;
            }
        }
    }

    cout << result;

    return 0;
}