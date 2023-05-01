#include <iostream>
using namespace std;

int main()
{
    int NUM_OF_SOLDIER;
    cin >> NUM_OF_SOLDIER;

    int minIdx = 0, minVal = 101;
    int maxIdx = 0, maxVal = 0;
    for (int i = 0; i < NUM_OF_SOLDIER; ++i)
    {
        int temp;
        cin >> temp;
        if (temp <= minVal)
        {
            minVal = temp;
            minIdx = i;
        }
        if (temp > maxVal)
        {
            maxVal = temp;
            maxIdx = i;
        }
    }

    cout << NUM_OF_SOLDIER - minIdx - 1 + maxIdx - (minIdx < maxIdx);

    return 0;
}