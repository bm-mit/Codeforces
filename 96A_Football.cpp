//* 200683323	Apr/04/2023 20:05UTC+7	Minh4893IT	A - Football	GNU C++17	Accepted	30 ms	0 KB

#include <iostream>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    int f = s.find("0000000");
    if (f != string::npos)
    {
        printf("YES");
        return 0;
    }

    f = s.find("1111111");
    if (f != string::npos)
        printf("YES");
    else
        printf("NO");

    return 0;
}