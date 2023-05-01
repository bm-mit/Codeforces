//* 204144934	May/01/2023 21:31UTC+7	Minh4893IT	A - Is It a Cat?	GNU C++14	Accepted	31 ms	200 KB

#include <iostream>
#include <regex>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    vector<char> word;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        word = vector<char>();

        for (auto c : s)
            if ((word.size() && word.back() != tolower(c)) || word.empty())
                word.push_back(tolower(c));

        printf(word == vector<char>{'m', 'e', 'o', 'w'} ? "YES\n" : "NO\n");
    }

    return 0;
}