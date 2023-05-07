//* 194931958	Feb/25/2023 21:33UTC+7	Minh4893IT	A - Theatre Square	GNU C++17	Accepted	15 ms	0 KB

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