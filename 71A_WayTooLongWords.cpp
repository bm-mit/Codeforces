//* 194441713	Feb/21/2023 17:39UTC+7	Minh4893IT	A - Way Too Long Words	GNU C++17	Accepted	15 ms	0 KB

#include <iostream>
using namespace std;

int TOTAL_WORDS;

int main()
{
    cin >> TOTAL_WORDS;

    string word;
    for (int idx = 0; idx < TOTAL_WORDS; ++idx)
    {
        cin >> word;
        if (word.length() > 10)
            cout << word[0] << word.length() - 2 << word[word.length() - 1] << endl;
        else
            cout << word << endl;
    }

    return 0;
}