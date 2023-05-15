//* 205934479	00:10:47	Minh4893IT	B - Decode String	GNU C++14	Accepted	46 ms	200 KB

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
    string s;
    GET(s);
    GET(s);
    string result;

    for (int i = s.length() - 1; i >= 0; --i)
    {
        if (s[i] != '0')
            result += char(s[i] - '0' + 'a' - 1);
        else
        {
            --i;
            int tens = s[i-1] - '0';
            int val = s[i] - '0' + tens * 10;

            result += char(val + 'a' - 1);

            --i;
        }
    }
    reverse(result.begin(), result.end());
    cout << result << endl;
}

signed main()
{
    FAST_IO;

    string line;
    GET(line);
    ss stream(line);

    int t;
    stream >> t;

    while (t--)
        solve();

    return 0;
}
