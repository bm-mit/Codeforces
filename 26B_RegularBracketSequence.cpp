//* 204020091	Apr/30/2023 16:06UTC+7	Minh4893IT	B - Regular Bracket Sequence	GNU C++17	Accepted	62 ms	9600 KB

#include <bits/stdc++.h>
using namespace std;

using sint = signed int;
#define ll long long
#define ull unsigned ll
#define int ll
#define ss stringstream
#define uset unordered_set
#define umap unordered_map

#define LLMAX INT64_MAX

#define in cin
#define out cout
#define input in
#define print out
#define GET(var) getline(cin, var)

#define endl "\n"
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

#define FORIR(i, a, n) for (int i = a; i < n; i++)
#define FORI(i, n) FORIR(i, 0, n)
#define FORR(a, n) FORIR(i, a, n)
#define FOR(n) FORIR(i, 0, n)
#define EACH(x, a) for (auto &x : a)
#define IF(cond, t, f) (cond ? t : f)
template <class T>
void OFILE(T finp, T fout)
{
    freopen(finp, "r", stdin), freopen(fout, "w", stdout);
}

void solve()
{
    stack<int> sta;

    string brackets;
    GET(brackets);

    int n = brackets.size();
    int result = 0;

    // vector<int> braSq(n);

    for (int i = 0; i < n; ++i)
    {
        char c = brackets[i];

        if (c == '(')
            sta.push(i);
        else if (sta.size())
        {
            // braSq[i] = i - sta.top() + 1;
            sta.pop();
            ++result;
        }
    }

    cout << result * 2;

    // for (int i = 0; i < n; ++i)
    // {
    //     if (braSq[i] <= i)
    //         braSq[i] += braSq[i - braSq[i]];
    // }

    // cout << *max_element(braSq.begin(), braSq.end());
}

sint main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();

    solve();

    return 0;
}
