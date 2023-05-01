#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string firstStr, secondStr;
    getline(cin, firstStr);
    getline(cin, secondStr);

    transform(firstStr.begin(), firstStr.end(), firstStr.begin(), ::tolower);
    transform(secondStr.begin(), secondStr.end(), secondStr.begin(), ::tolower);

    if (firstStr == secondStr)
        cout << 0;
    else if (firstStr > secondStr)
        cout << 1;
    else
        cout << -1;

    return 0;
}