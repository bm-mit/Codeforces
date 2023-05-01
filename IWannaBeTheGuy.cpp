#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    int NUM_OF_LEVEL;
    cin >> NUM_OF_LEVEL;

    unordered_set<int> levels;

    int xPassableLevel, yPassableLevel;
    cin >> xPassableLevel;
    for (int i = 0; i < xPassableLevel; ++i)
    {
        int temp;
        cin >> temp;
        levels.insert(temp);
    }

    cin >> yPassableLevel;
    for (int i = 0; i < yPassableLevel; ++i)
    {
        int temp;
        cin >> temp;
        levels.insert(temp);
    }

    cout << ((levels.size() == NUM_OF_LEVEL) ? "I become the guy." : "Oh, my keyboard!");
}