#include <iostream>
using namespace std;

bool checkString(string str)
{
    string hello = "hello";
    int firstIdx = 0;
    int secondIdx = 0;
    for (secondIdx = 0; secondIdx < str.length(); ++secondIdx)
    {
        if (str[secondIdx] == hello[firstIdx])
            if (++firstIdx == hello.length())
                return true;
    }
    return false;
}

int main()
{
    string input;
    cin >> input;
    cout << ((checkString(input)) ? "YES" : "NO");
}