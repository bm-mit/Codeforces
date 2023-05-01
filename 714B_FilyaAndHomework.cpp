//* 203639695	Apr/27/2023 15:17UTC+7	Minh4893IT	B - Filya and Homework	GNU C++17	Accepted	234 ms	0 KB
#include <bits/stdc++.h>
using namespace std;

using sint = signed int;
#define ll long long
#define ull unsigned ll
#define int ll
#define ss stringstream
#define s string
#define uset unordered_set
#define umap unordered_map

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

sint main()
{
    int n;
    input >> n;

    set<int> unset;
    FOR(n)
    {
        int temp;
        input >> temp;
        unset.insert(temp);
        if (unset.size() > 3)
            break;
    }
    int low = *unset.begin();

    auto highP = unset.begin();
    advance(highP, 2);
    int high = *highP;

    auto midP = unset.begin();
    advance(midP, 1);
    int mid = *midP;

    if (unset.size() == 3)
        print << IF((low + high) / 2 == mid && (low + high) % 2 == 0, "YES", "NO");
    else if (unset.size() == 2 || unset.size() == 1)
        print << "YES";
    else
        print << "NO";

    return 0;
}