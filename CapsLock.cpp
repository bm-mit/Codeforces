#include <iostream>
#include <algorithm>
using namespace std;

char reverseCase(char chr)
{
    if (isupper(chr))
        return tolower(chr);
    return toupper(chr);
}

int main()
{
    string input;
    cin >> input;

    int upperCases = 0;
    for (auto chr : input)
        upperCases += isupper(chr);

    if (upperCases >= input.length() - 1)
        transform(input.begin(), input.end(), input.begin(), ::reverseCase);

    cout << input;

    return 0;
}