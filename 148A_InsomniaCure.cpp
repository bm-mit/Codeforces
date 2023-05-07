//* 195021312	Feb/26/2023 13:45UTC+7	Minh4893IT	A - Insomnia cure	GNU C++17	Accepted	30 ms	0 KB

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr;
    for (int i = 0; i < 4; ++i)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    int NUM_OF_DRAGON;
    cin >> NUM_OF_DRAGON;

    int res = 0;
    for (int i = 1; i <= NUM_OF_DRAGON; ++i)
    {
        for (auto elem : arr)
        {
            if (i % elem == 0)
            {
                ++res;
                break;
            }
        }
    }

    cout << res;

    return 0;
}