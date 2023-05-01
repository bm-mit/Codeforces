#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char line[1001];
    cin >> line;

    line[0] = toupper(line[0]);
    cout << line;
}