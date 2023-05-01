#include <iostream>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main()
{
    int length;
    cin >> length;
    if (length < 26)
    {
        cout << "NO";
        return 0;
    }

    string sentence;
    cin >> sentence;
    transform(sentence.begin(), sentence.end(), sentence.begin(), ::tolower);
    unordered_set<char> chars;

    for (char chr : sentence)
        chars.insert(chr);

    cout << ((chars.size() >= 26) ? "YES" : "NO");
}