//* 205730470	May/13/2023 21:36UTC+7	Minh4893IT	B - Unary	GNU C++14	Accepted	30 ms	0 KB

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
void OFILE(const char *finp, const char *fout)
{
    freopen(finp, "r", stdin), freopen(fout, "w", stdout);
}

map<char, string> dict = {
    {'>', "1000"},
    {'<', "1001"},
    {'+', "1010"},
    {'-', "1011"},
    {'.', "1100"},
    {',', "1101"},
    {'[', "1110"},
    {']', "1111"}};

void solve()
{
    string s;
    GET(s);

    string conv;
    for (auto c : s)
        conv += dict[c];
    
    int res = 0;
    for (auto c : conv)
    {
        res *= 2;
        res += c == '1';
        res %= 1000003;
    }
    cout << res;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();

    solve();

    return 0;
}
