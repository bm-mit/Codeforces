//* 212607960	Jul/07/2023 22:09UTC+7	Minh4893IT	C - Rudolf and the Another Competition	GNU C++14	Accepted	124 ms	9400 KB

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

struct people
{
    int point;
    int pen;
    int index;
};

bool comp(people a, people b)
{
    if (a.point == b.point)
    {
        if (a.pen == b.pen)
            return a.index < b.index;
        return a.pen < b.pen;
    }

    return a.point > b.point;
}

void solve()
{
    int n, m, h;
    cin >> n >> m >> h;

    vector<people> arr;
    for (int i = 0; i < n; ++i)
    {
        vector<int> times(m);
        for (int j = 0; j < m; ++j)
            cin >> times[j];
        sort(times.begin(), times.end());

        int currtime = 0;
        int pen = 0;
        int point = 0;
        for (int j = 0; j < m; ++j)
        {
            if (currtime + times[j] > h)
                break;

            ++point;
            currtime += times[j];
            pen += currtime;
        }

        people p;
        p.pen = pen;
        p.point = point;
        p.index = i;
        arr.push_back(p);
    }

    sort(arr.begin(), arr.end(), comp);

    // cerr << endl;
    // for (auto elem : arr)
    //     cerr << elem.point << ' ' << elem.pen << ' ' << elem.index << endl;
    for (int i = 0; i < arr.size(); ++i)
    {
        if (arr[i].index == 0)
        {
            cout << i + 1 << endl;
            return;
        }
    }
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
