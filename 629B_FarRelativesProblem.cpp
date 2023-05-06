//* 204702094	May/06/2023 14:07UTC+7	Minh4893IT	B - Far Relative’s Problem	GNU C++14	Accepted	31 ms	100 KB

#include <bits/stdc++.h>
using namespace std;

using sint = signed int;
#define ll long long
#define ull unsigned ll
#define int ll
#define ss stringstream
#define uset unordered_set
#define umap unordered_map
#define vec vector
#define pq priority_queue

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

struct people
{
    bool isMale = false;
    int first, second;

    bool operator<(people b)
    {
        if (this->first == b.first)
            return this->second < b.second;
        return this->first < b.first;
    }
};

int n;
array<people, 5000> arr;

pair<int, int> count(int day)
{
    pair<int, int> result;
    for (int i = 0; i < n && arr[i].first <= day; ++i)
        if (arr[i].second >= day)
            if (arr[i].isMale)
                ++result.first;
            else
                ++result.second;
    return result;
}

void solve()
{
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        string gender;
        cin >> gender >> arr[i].first >> arr[i].second;
        arr[i].isMale = gender == "M";
    }

    sort(arr.begin(), arr.begin() + n);

    int result = 0;
    for (int i = 1; i <= 366; ++i)
    {
        auto temp = count(i);
        result = max(result, min(temp.first, temp.second) * 2);
    }
    cout << result;
}

sint main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();

    solve();

    return 0;
}
