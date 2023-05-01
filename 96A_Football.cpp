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