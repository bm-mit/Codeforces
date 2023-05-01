#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    deque<int> arr;

    int s = 0;
    for (int i = n; i--;)
    {
        int temp;
        cin >> temp;
        s += temp;
        arr.push_back(temp);
    }

    int se = 0;
    for (int i = 0; i < n; ++i)
    {
        if (i % 2 == 0)
            se += max(arr.front(), arr.back());
        if (arr.front() > arr.back())
            arr.pop_front();
        else
            arr.pop_back();
    }

    cout << se << ' ' << s - se;
}