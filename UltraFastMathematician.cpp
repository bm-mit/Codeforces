#include <iostream>
using namespace std;

int main()
{
    string binary1, binary2;
    cin >> binary1 >> binary2;
    for (int i = 0; i < binary1.length(); ++i)
        cout << (binary1[i] != binary2[i]);

}