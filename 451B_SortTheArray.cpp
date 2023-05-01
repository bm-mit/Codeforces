#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (auto &elem : arr)
        cin >> elem;

    int start = 0;
    while (start + 1 < n && arr[start] < arr[start + 1])
        ++start;

    if (start >= n)
    {
        cout << "yes\n1 1";
        return 0;
    }

    int stop = start;
    while (stop + 1 < n && arr[stop] > arr[stop + 1])
        ++stop;

    reverse(arr.begin() + start, arr.begin() + stop + 1);

    if (is_sorted(arr.begin(), arr.end()))
        cout << "yes\n" << start + 1 << ' ' << stop + 1;
    else
        cout << "no";

    return 0;
}
