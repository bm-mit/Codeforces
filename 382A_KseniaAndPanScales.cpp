#include <bits/stdc++.h>
using namespace std;

int main()
{
    string scales, weights;
    getline(cin, scales);
    getline(cin, weights);

    string leftSide, rightSide;
    bool yet = false;
    for (auto c : scales)
        if (c == '|')
            yet = true;
        else
        {
            if (yet)
                rightSide += c;
            else
                leftSide += c;
        }

    while (weights.size())
    {
        if (leftSide.length() < rightSide.length())
        {
            leftSide += weights.back();
            weights.pop_back();
        }
        else if (rightSide.length() < leftSide.length() && weights.size())
        {
            rightSide += weights.back();
            weights.pop_back();
        }
        else
        {
            if (weights.size() >= 2)
            {
                leftSide += weights.back();
                weights.pop_back();
                rightSide += weights.back();
                weights.pop_back();
            }
            else
                break;
        }
    }

    if (leftSide.length() == rightSide.length() && weights.empty())
        cout << leftSide << '|' << rightSide;
    else
        cout << "Impossible";

    return 0;
}