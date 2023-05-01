#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);

    int numOfStops;
    cin >> numOfStops;

    int onboardPassengers = 0;
    int minimumCapacity = 0;

    int enterPassengers, leavePassengers;
    for (int stopIdx = 0; stopIdx < numOfStops; ++stopIdx)
    {
        cin >> leavePassengers >> enterPassengers;
        onboardPassengers += enterPassengers - leavePassengers;
        minimumCapacity = max(minimumCapacity, onboardPassengers);
    }

    cout << minimumCapacity;

    return 0;
}