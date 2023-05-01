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