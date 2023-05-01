//* 200687455	Apr/04/2023 20:42UTC+7	Minh4893IT	A - HQ9+	GNU C++17	Accepted	30 ms	0 KB

#include <iostream>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    for (char c : {'H', 'Q', '9'})
    {
        int f = s.find(c);
        if (f != string::npos)
        {
            printf("YES");
            return 0;
        }
    }

    printf("NO");

    return 0;
}