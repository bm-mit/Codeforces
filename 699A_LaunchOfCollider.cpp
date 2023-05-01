#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string line, moves;

    getline(cin, line);
    stringstream stream(line);
    stream >> n;
    vector<int> left, right;

    getline(cin, moves);

    getline(cin, line);
    stream = stringstream(line);
    for (int i = 0; i < n; ++i)
    {
        int temp;
        stream >> temp;
        if (moves[i] == 'L')
            left.push_back(temp);
        else
            right.push_back(temp);
    }

    int result = INT_MAX;
    for (int i = 0; i < left.size(); ++i)
    {
        int leftPos = left[i];

        int l = 0;
        int r = right.size() - 1;
        int last = -1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (right[mid] < leftPos)
            {
                last = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }

        if (last != -1 && right[last] < leftPos)
            result = min(result, (leftPos - right[last]) / 2);
    }

    cout << (result != INT_MAX ? result : -1);

    return 0;
}