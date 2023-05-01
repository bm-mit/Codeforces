#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	
	int numOfMagnets;
	cin >> numOfMagnets;
	
	int pole;
	int lastLeftPole = -1;
	int res = 0;
	for (int idx = 0; idx < numOfMagnets; ++idx)
	{
		cin >> pole;
	    int leftPole = pole / 10;
		res += leftPole != lastLeftPole;
		lastLeftPole = leftPole;
	}
	
	cout << res;
	
	return 0;
}