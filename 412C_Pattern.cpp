//* 211134267	Jun/26/2023 19:46UTC+7	Minh4893IT	C - Pattern	GNU C++17	Accepted	46 ms	2500 KB

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

void solve()
{
    int m;
    cin >> m;

    vector<string> arr(m);
    for (int i = 0; i < m; ++i)
        cin >> arr[i];
    
    int n = arr[0].size();

    for (int i = 0; i < n; ++i)
    {
        set<char> s = {};
        for (int j = 0; j < m; ++j)
            s.insert(arr[j][i]);
        
        if (s.size() == 1)
        {
            if (*s.begin() == '?')
                cout << 'a';
            else
                cout << *s.begin();
        }
        else if (s.size() == 2 && *s.begin() == '?')
        {
            auto ptr = s.begin();
            advance(ptr, 1);
            cout << *ptr;
        }
        else
            cout << '?';
    }

}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
