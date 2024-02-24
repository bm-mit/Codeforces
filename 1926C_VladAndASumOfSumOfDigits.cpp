//* 247818441	Feb/23/2024 10:11UTC+7	Minh4893IT#	C - Vlad and a Sum of Sum of Digits	GNU C++17	Accepted	31 ms	

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ss stringstream
#define endl "\n"
#define LLMAX INT64_MAX
#define IF(cond, t, f) (cond ? t : f)
#define OFILE(finp, fout) freopen(finp, "r", stdin), freopen(fout, "w", stdout)
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(NULL)
#define MULTI \
    int t;    \
    cin >> t; \
    while (t--)

array<int, 200005> arr;

int f(int i)
{
    int s = 0;
    while (i)
        s += i % 10, i /= 10; 
    return s;
}

void preprocess()
{
    for (int i = 1; i <= 200000; ++i)
        arr[i] += arr[i-1] + f(i);
}

void solve()
{
    int n;
    cin >> n;
    
    cout << arr[n] << endl;
}

signed main()
{
    FAST_IO;

    preprocess();

    MULTI
    solve();

    return 0;
}

