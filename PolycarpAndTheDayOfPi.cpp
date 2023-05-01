#include <iostream>
#include <string>
using namespace std;

const string pi = "314159265358979323846264338327";

int check(const string &s)
{
    int i = 0;
    for (i = 0; i < s.length(); ++i)
    {
        if (s[i] != pi[i])
            break;
    }
    return i;
}

int main()
{
    int t;
    scanf("%d\n", &t);

    string s;
    while (t--)
    {
        getline(cin, s);
        cout << check(s) << endl;
    }

    return 0;
}