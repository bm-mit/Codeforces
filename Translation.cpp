#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string beforeStr, afterStr;
    getline(cin, beforeStr);
    getline(cin, afterStr);

    reverse(afterStr.begin(), afterStr.end());
    cout << ((beforeStr == afterStr) ? "YES" : "NO");
}