#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr(4);
    for (auto &elem : arr)
        cin >> elem;
    
    string s;
    getline(cin, s);
    getline(cin, s);

    int result = 0;
    for (auto c : s)
    {
        result += arr[c - '1'];
    }

    cout << result;

    return 0;
}