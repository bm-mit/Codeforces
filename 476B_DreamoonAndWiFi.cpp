#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    int n = s1.size();
    int sentPos = 0;
    int realPos = 0;
    int mark = 0;
    int change = 0;
    for (int i = 0; i < n; ++i)
    {
        if (s1[i] == '+')
            ++sentPos;
        else
            --sentPos;

        if (s2[i] == '?')
            ++mark;
        else
        {

            if (s2[i] == '+')
                ++realPos;
            else
                --realPos;
        }
    }

    int point = sentPos - realPos;
    if (point > mark || point % 2 != mark % 2)
    {
        printf("%.12f", 0);
    }
    else
    {
        
    }

    return 0;
}