//* 206302999	May/18/2023 13:18UTC+7	Minh4893IT	B - Calendar	GNU C++17	Accepted	30 ms	0 KB

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

int dayInMonth[13] = {
    0,
    0,
    31,
    59,
    90,
    120,
    151,
    181,
    212,
    243,
    273,
    304,
    334};

bool isLeap(int year)
{
    if (year % 100 == 0)
        return year % 400 == 0;
    else
        return year % 4 == 0;
}

int numOfLeap(int year, int month)
{
    if (isLeap(year))
        return (year - 1 - 1900) / 4 + (month > 2);
    return (year - 1900) / 4;
}

int getDay(int day, int month, int year)
{
    cerr << numOfLeap(year, month) << endl;
    if (month > 2)
        return dayInMonth[month] + day + numOfLeap(year, month) + 365 * (year - 1900);
    return dayInMonth[month] + day + numOfLeap(year, month) + 365 * (year - 1900);
}

void solve()
{

    string line;
    GET(line);
    replace(line.begin(), line.end(), ':', ' ');

    ss stream(line);
    int year1, month1, day1;
    stream >> year1 >> month1 >> day1;

    GET(line);
    replace(line.begin(), line.end(), ':', ' ');
    int year2, month2, day2;
    stream = ss(line);
    stream >> year2 >> month2 >> day2;

    cout << abs(getDay(day1, month1, year1) - getDay(day2, month2, year2));
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
