#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int count[3] = {};
    for (int i = 0; i < n; ++i)
    {
        int temp;
        cin >> temp;
        count[i % 3] += temp;
    }

    int exer = distance(count, max_element(count, count + 3));

    switch (exer)
    {
        case 0:
            cout << "chest";
            break;
        case 1:
            cout << "biceps";
            break;
        default:
            cout << "back";
    }

    return 0;
}