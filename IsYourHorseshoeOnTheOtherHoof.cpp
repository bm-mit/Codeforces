#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<long long int> shoes;

    for (int i = 0; i < 4; ++i)
    {
        int temp;
        cin >> temp;
        shoes.insert(temp);
    }

    cout << 4 - shoes.size();

    return 0;
}