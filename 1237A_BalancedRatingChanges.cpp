#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    bool roundUp = true;
    while (n--)
    {
        int change;
        cin >> change;
        if (change & 1)
        {
            if (change < 0)
                cout << change / 2 - !roundUp << "\n";
            else
                cout << change / 2 + roundUp << "\n";
            roundUp = !roundUp;
        }
        else
            cout << change / 2 << "\n";
    }

    return 0;
}