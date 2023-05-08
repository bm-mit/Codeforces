//* 195003030	Feb/26/2023 07:03UTC+7	Minh4893IT	A - Chat room	GNU C++17	Accepted	15 ms	0 KB

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