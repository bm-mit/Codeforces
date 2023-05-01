#include <iostream>
using namespace std;

int main()
{
    double NUM_OF_CONTAINER;
    cin >> NUM_OF_CONTAINER;

    int totalAmount = 0;
    for (int i = 0; i < NUM_OF_CONTAINER; ++i)
    {
        int temp;
        cin >> temp;
        totalAmount += temp;
    }

    cout << totalAmount / NUM_OF_CONTAINER;

    return 0;
}