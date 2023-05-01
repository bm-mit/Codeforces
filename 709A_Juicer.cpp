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