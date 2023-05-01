#include <iostream>
using namespace std;

int MAX_STATEMENTS;

int main()
{
    cin >> MAX_STATEMENTS;

    int res = 0;

    for (int i = 0; i < MAX_STATEMENTS; ++i)
    {
        string statement;
        cin >> statement;

        if (statement[1] == '+')
            ++res;
        else
            --res;
    }

    cout << res;

    return 0;
}