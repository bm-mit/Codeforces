//* 211439078	Jun/29/2023 21:17UTC+7	Minh4893IT	B - Tenzing and Books	GNU C++14	Accepted	124 ms	2700 KB

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ss stringstream
#define uset unordered_set
#define umap unordered_map
#define mmap multimap
#define mset multiset
#define pq priority_queue
#define endl "\n"

#define LLMAX INT64_MAX
#define GET(var) getline(cin, var)
#define EACH(x, a) for (auto &x : a)
#define IF(cond, t, f) (cond ? t : f)
#define OFILE(finp, fout) freopen(finp, "r", stdin), freopen(fout, "w", stdout)
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie()

const unsigned int size = 32;

int n;
bitset<size> x;

bool check(int num)
{
    bitset<size> n = num;

    for (int i = 0; i < 32; ++i)
        if (!x[i] && n[i])
            return false;

    return true;
}

void solve()
{
    int temp;
    cin >> n >> temp;
    x = temp;

    deque<int> books[3];
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < n; ++j)
        {
            int val;
            cin >> val;
            books[i].push_back(val);
        }

    bitset<size> res;
    while (true)
    {
        bool cont = false;
        for (int i = 0; i < 3; ++i)
            if (books[i].size() && check(books[i].front()))
            {
                res |= books[i].front();
                cont = true;
                books[i].pop_front();
            }

        if (!cont)
            break;
    }

    cout << IF(res == x, "YES", "NO") << endl;
}

signed main()
{
    FAST_IO;

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
