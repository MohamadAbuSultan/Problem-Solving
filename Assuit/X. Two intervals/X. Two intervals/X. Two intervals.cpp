
#include <iostream>

using namespace std;

int main()
{
	long long L1, R1, L2, R2;
	cin >> L1 >> R1 >> L2 >> R2;
	if ((R1 >= L2 && L1 < L2) && R1 < R2)
		cout << L2 << " " << R1;
	else if (L2 > R1 || L1 > R2)
		cout << -1;
	else if (R1 >= R2 && L1 >= L2)
		cout << L1 << " " << R2;
	else if (L2 < L1 && R2 > R1)
		cout << L1 << " " << R1;
	else if (L2 > L1 && R1 > R2)
		cout << L2 << " " << R2;
	else
		cout << L2 << " " << R1;
}
