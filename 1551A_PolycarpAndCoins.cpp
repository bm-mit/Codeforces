//* 200655820	Apr/04/2023 15:30UTC+7	Minh4893IT	A - Polycarp and Coins	GNU C++17	Accepted	31 ms	0 KB

#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int t;
	scanf("%d", &t);
	
	while (t--) {
		int a;
		scanf("%d", &a);
		
		if (a % 3 == 0)
			cout << a / 3 << ' ' << a / 3<< endl;
		else if (a % 3 == 1)
			cout << a / 3 + 1 << ' ' << a / 3 << endl;
		else
			cout << a / 3 << ' ' << a / 3 + 1 << endl;
	}
}