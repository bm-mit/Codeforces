#include <iostream>
using namespace std;

using ull = unsigned long long int;

int main()
{
    ull width, height, coverSize;
    cin >> width >> height >> coverSize;

    ull numOfCoverCol = width / coverSize;
    ull numOfCoverRow = height / coverSize;
    ull totalCoverStone = numOfCoverCol * numOfCoverRow;

    totalCoverStone += (width % coverSize != 0) * numOfCoverRow;
    totalCoverStone += (height % coverSize != 0) * numOfCoverCol;
    totalCoverStone += (width % coverSize != 0) && (height % coverSize != 0);

    cout << totalCoverStone;
}