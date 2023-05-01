#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    ll n;
    cin >> n;
}

int main()
{
    ios_base::sync_with_stdio(false);

    vector<int> stairs = {1};
    int i = 0;
    while (stairs[i] <= 100)
    {
        stairs.push_back((i + 1) * 2 * 2 + 1);
        ++i;
    }

    for (int i = 0; i < 10; ++i)
        cout << stairs[i] << endl;
    

    return 0;
}