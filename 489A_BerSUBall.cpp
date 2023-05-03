//* 201225534	Apr/08/2023 14:29UTC+7	Minh4893IT	B - BerSU Ball	GNU C++17	Accepted	15 ms	0 KB

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    scanf("%d", &n);
    vector<int> a(n);
    for (auto &elem : a)
        scanf("%d", &elem);

    scanf("%d", &m);
    vector<int> b(m);
    for (auto &elem : b)
        scanf("%d", &elem);

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int i = 0, j = 0;
    int result = 0;
    while (i < n && j < m)
    {
        if (abs(a[i] - b[j]) <= 1)
        {
            ++result;
            ++i;
            ++j;
        }
        else if (a[i] < b[j])
            ++i;
        else
            ++j;
    }

    printf("%d", result);

    return 0;
}