#include <iostream>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);
    int drinkToast = k * l / nl;
    int limeSlices = c * d;
    int saltToast = p / np;
    cout << (min(min(drinkToast, limeSlices), saltToast) / n);

    return 0;
}