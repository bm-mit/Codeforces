//* 215229910	Jul/23/2023 22:48UTC+7	Minh4893IT	B - Fibonaccharsis	GNU C++14	Accepted	701 ms	0 KB

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

int n, k;

pair<int, int> fib(int num)
{
    int fib1 = 1;
    int fib2 = 1;
    int i = 2;
    for (; i < num; ++i)
    {
        fib1 += fib2;
        swap(fib1, fib2);

        if (fib2 > n)
            return {0, 0};
    }

    return {fib1, fib2};
}

// Check if exists y satisfied ax + by = n
bool check(int x, int a, int b)
{
    int by = n - a * x;
    if (by < 0)
        return false;
    if (by % b)
        return false;
    
    int y = by / b;
    return x <= y;
}

void solve()
{
    cin >> n >> k;

    pair<int, int> f = fib(k - 1);
    int a = f.first, b = f.second;
    if (!a && !b)
    {
        cout << 0 << endl;
        return;
    }

    int result = 0;
    for (int x = 0; x <= n; ++x)
        if (check(x, a, b))
            result += check(x, a, b);

    cout << result << endl;
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
