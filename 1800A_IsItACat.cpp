#include <iostream>
#include <regex>
using namespace std;

int main()
{
    cin.tie(NULL);
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d\n", &n);

        string s;
        cin >> s;

        int c = 0;
        char cs[] = {'m', 'e', 'o', 'w'};
        int j = 0;
        bool res = false;
        for (int i = 1; i < s.length(); ++i)
        {
            if (tolower(s[i]) != tolower(s[i - 1]) && tolower(s[i]) == cs[j] && j < 4)
            {
                ++j;
            }
            if (j == 4)
                res = true;
            else
                res = false;
        }

        printf(res ? "YES\n" : "NO\n");
    }

    return 0;
}