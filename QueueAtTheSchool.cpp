#include <iostream>
using namespace std;

int main()
{
    int numOfStudents, swapTimes;
    cin >> numOfStudents >> swapTimes;

    string queue;
    cin >> queue;

    for (int swapIdx = 0; swapIdx < swapTimes; ++swapIdx)
    {
        for (int idx = 0; idx < numOfStudents; ++idx)
        {
            if (queue[idx] == 'B' && queue[idx + 1] == 'G')
            {
                swap(queue[idx], queue[idx+1]);
                ++idx;
            }

        }
    }

    cout << queue;

    return 0;
}