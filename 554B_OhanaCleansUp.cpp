//* 205381472	May/11/2023 09:07UTC+7	Minh4893IT	B - Ohana Cleans Up	GNU C++14	Accepted	15 ms	500 KB

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

class Node
{
public:
    Node *next[2];
    bool ended = false;
    int res = 0;
};

struct Trie
{
    Node *head = new Node();

    int upd(string s)
    {
        Node *curr = head;
        for (auto c : s)
        {
            int idx = c - '0';
            if (!curr->next[idx])
                curr->next[idx] = new Node();
            curr = curr->next[idx];
        }
        curr->ended = true;
        ++curr->res;
        return curr->res;
    }
};

void solve()
{
    int n;
    cin >> n;
    string s;
    GET(s);

    Trie trie;

    int result = 0;
    for (int i = 0; i < n; ++i)
    {
        GET(s);
        result = max(result, trie.upd(s));
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
