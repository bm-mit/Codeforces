#include <iostream>
using namespace std;

using ll = unsigned long long int;

int face(string type)
{
    if (type == "Tetrahedron")
        return 4;
    if (type == "Cube")
        return 6;
    if (type == "Octahedron")
        return 8;
    if (type == "Dodecahedron")
        return 12;
    return 20;
}

int main()
{
    ll n, res = 0;
    cin >> n;

    while (n--)
    {
        string str;
        cin >> str;
        res += face(str);
    }

    cout << res;

    return 0;
}