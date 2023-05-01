#include <bits/stdc++.h>
using namespace std;

int main()
{
    string shift, text;
    getline(cin, shift);
    getline(cin, text);

    string keyboard[3] = {
        "qwertyuiop",
        "asdfghjkl;",
        "zxcvbnm,./"
    };

    for (auto c : text)
    {
        for (int i = 0; i < 3; ++i)
        {
            int foundIdx = keyboard[i].find(c);
            if (foundIdx != string::npos)
            {
                cout << keyboard[i][foundIdx + (shift == "L" ? 1 : -1)];
                break;
            }
        }
    }

    return 0;
}