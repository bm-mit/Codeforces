#include <iostream>
using namespace std;

int main()
{
    int temp;
    cin >> temp;

    string line;
    cin >> line;

    int res = 0;
    for (int i = 0; i < line.length() - 1; ++i)
        res += line[i] == line[i + 1];

    cout << res;

    return 0;
}