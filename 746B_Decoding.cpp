#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    getline(cin, s);

    deque<char> dq;
    reverse(s.begin(), s.end());

    for (; s.size(); s.pop_back())
    {
        if (s.size() & 1)
            dq.push_back(s.back());
        else
            dq.push_front(s.back());
    }

    while (dq.size())
    {
        cout << dq.front();
        dq.pop_front();
    }

    return 0;
}
