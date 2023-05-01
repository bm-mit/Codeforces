#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);

    int numOfRooms;
    cin >> numOfRooms;

    int roomCanAccommodate = 0;

    int peopleInRoom, roomMaximumCapacity;
    for (int idx = 0; idx < numOfRooms; ++idx)
    {
        cin >> peopleInRoom >> roomMaximumCapacity;
        roomCanAccommodate += roomMaximumCapacity - peopleInRoom >= 2;
    }

    cout << roomCanAccommodate;

    return 0;
}