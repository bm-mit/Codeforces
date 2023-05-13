//* 205554384	00:05:37	Minh4893IT	A - New Palindrome	GNU C++14	Accepted	15 ms	8 KB

#include <bits/stdc++.h>
using namespace std;

using sint = signed int;
#define ll long long
#define ull unsigned ll
#define int ll
#define ss stringstream
#define uset unordered_set
#define umap unordered_map
#define mmap multimap
#define mset multiset
#define vec vector
#define pq priority_queue
#define pb push_back
#define popb pop_back

#define LLMAX INT64_MAX

#define GET(var) getline(cin, var)

#define endl "\n"
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

#define EACH(x, a) for (auto &x : a)
#define IF(cond, t, f) (cond ? t : f)
template <class T>
void OFILE(T finp, T fout)
{
    freopen(finp, "r", stdin), freopen(fout, "w", stdout);
}

void solve()
{
    string s;
    GET(s);

    int n = s.length();
    int half = n / 2;
    for (int i = 1; i < half; ++i)
    {
        if (s[i] != s[i-1])
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

sint main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();

    string line;
    GET(line);
    ss stream(line);

    int t;
    stream >> t;

    while (t--)
        solve();

    return 0;
}
