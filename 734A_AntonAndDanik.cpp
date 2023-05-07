//* 194572676	Feb/22/2023 20:35UTC+7	Minh4893IT	A - Anton and Danik	GNU C++17	Accepted	31 ms	300 KB

#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);

    int numOfGames;
    cin >> numOfGames;

    string line;
    cin >> line;

    int antonWins = 0;
    for (char chr : line)
        antonWins += chr == 'A';

    if (antonWins > numOfGames - antonWins)
        cout << "Anton";
    else if (antonWins == numOfGames - antonWins)
        cout << "Friendship";
    else
        cout << "Danik";

    return 0;
}