#include <iostream>
using namespace std;

string s;
int t;

int rIdx(int idx)
{
    return s.length() - idx - 1;
}

int main()
{
    scanf("%d", &t);
    while (t--)
    {
        int temp;
        scanf("%d\n", &temp);

        getline(cin, s);

        bool last = false;
        bool cont = true;
        int c = 0;
        for (int i = 0; i <= s.length() / 2; ++i)
        {
            if (s[i] == s[rIdx(i)])
                if ((c += last) >= 2)
                    break;

            last = s[i] != s[rIdx(i)];
        }

        cout << (c < 2 ? "Yes" : "No");
    }
}