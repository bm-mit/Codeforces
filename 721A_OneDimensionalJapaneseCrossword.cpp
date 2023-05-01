//* 202788621	Apr/20/2023 15:06UTC+7	Minh4893IT	A - One-dimensional Japanese Crossword	GNU C++17	Accepted	15 ms	0 KB

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    getline(cin, s);
    s += ' ';

    vector<int> result;
    int count = 0;
    for (auto c : s)
    {
        if (c == 'B')
            ++count;
        else
        {
            if (count)
                result.push_back(count);
            count = 0;
        }
    }

    cout << result.size() << endl;
    for (auto elem : result)
        cout << elem << ' ';

    return 0;
}