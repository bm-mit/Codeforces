//* 200725558	Apr/04/2023 22:12UTC+7	Minh4893IT	A - Insert Digit	GNU C++17	Accepted	62 ms	500 KB

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <map>
#include <string>
#include <numeric>
using namespace std;

int main()
{
    // freopen("output.out", "w", stdout);
    int t;
    cin >> t;
    for (int j = 0; j < t; ++j)
    {
        char a;
        int b;
        string num = "";
        cin >> b >> a;
        for (int i = 0; i < b; ++i)
        {
            char temp;
            cin >> temp;
            num += temp;
        }

        bool i = true;
        for (auto c : num)
        {

            if (a > c)
                if (i)
                {
                    cout << a;
                    i = false;
                }
            cout << c;
        }
        if (i)
            cout << a;
        cout << endl;
    }

    return 0;
}