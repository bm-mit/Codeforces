#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string word;
    cin >> word;

    int capitalLetters = 0;
    for (char chr : word)
        capitalLetters += isupper(chr);

    if (capitalLetters > word.length() - capitalLetters)
        transform(word.begin(), word.end(), word.begin(), ::toupper);
    else
        transform(word.begin(), word.end(), word.begin(), ::tolower);

    cout << word;

    return 0;
}