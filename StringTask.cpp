#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string word;
    getline(cin, word);

    transform(word.begin(), word.end(), word.begin(), ::tolower);

    string res;
    for (char chr : word)
    {
        if (chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' || chr == 'u' || chr == 'y')
            continue;
        res += "." + string(1, chr);
    }

    cout << res;

    return 0;
}