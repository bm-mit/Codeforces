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