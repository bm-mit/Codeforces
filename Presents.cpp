#include <iostream>
#include <queue>
#include <utility>

using namespace std;

int main()
{
    cin.tie(NULL);

    int numOfPresents;
    cin >> numOfPresents;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> presentList;

    int presentIdx;
    for (int idx = 0; idx < numOfPresents; ++idx)
    {
        cin >> presentIdx;
        presentList.push(pair<int, int>(presentIdx, idx));
    }

    while(presentList.size())
    {
        cout << presentList.top().second + 1 << ' ';
        presentList.pop();
    }

    return 0;
}