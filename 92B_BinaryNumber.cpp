//* 205496817	May/12/2023 11:32UTC+7	Minh4893IT	B - Binary Number	GNU C++14	Accepted	31 ms	2100 KB

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

    int res = 0;
    while (s.size() > 1)
    {
        while (s.back() == '0')
        {
            ++res;
            s.popb();
        }

        int count = 0;
        if (s.size() > 1)
            while (s.size() && s.back() == '1')
            {
                ++count;
                s.popb();
            }

        if (count > 0)
            res += 1 + count;

        if (s.size() > 1)
        {
            s.popb();
            s.pb('1');
        }
    }
    cout << res;
}

sint main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();

    solve();

    return 0;
}
