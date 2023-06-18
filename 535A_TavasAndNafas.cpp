//* 210031183	Jun/18/2023 14:56UTC+7	Minh4893IT	A - Tavas and Nafas	GNU C++17	Accepted	15 ms	100 KB

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
    int n;
    cin >> n;

    map<int, string> m = {
        {1, "one"},
        {2, "two"},
        {3, "three"},
        {4, "four"},
        {5, "five"},
        {6, "six"},
        {7, "seven"},
        {8, "eight"},
        {9, "nine"}};

    map<int, string> tenth = {
        {1, "ten"},
        {2, "twenty"},
        {3, "thirty"},
        {4, "forty"},
        {5, "fifty"},
        {6, "sixty"},
        {7, "seventy"},
        {8, "eighty"},
        {9, "ninety"}};

    map<int, string> under20 = {
        {11, "eleven"},
        {12, "twelve"},
        {13, "thirteen"},
        {14, "fourteen"},
        {15, "fifteen"},
        {16, "sixteen"},
        {17, "seventeen"},
        {18, "eighteen"},
        {19, "nineteen"}};

    if (n == 0)
    {
        cout << "zero" << endl;
        return;
    }

    if (n % 10 == 0)
    {
        cout << tenth[n / 10] << endl;
        return;
    }

    if (n <= 9)
    {
        cout << m[n] << endl;
        return;
    }

    if (n <= 19)
    {
        cout << under20[n] << endl;
        return;
    }

    cout << tenth[n / 10] << '-' << m[n % 10] << endl;
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
