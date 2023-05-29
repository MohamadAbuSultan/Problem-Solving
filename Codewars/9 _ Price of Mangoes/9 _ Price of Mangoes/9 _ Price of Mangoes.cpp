
#include <iostream>

using namespace std;

int mango(int quantity, int price)
{
	return (quantity - quantity / 3) * price;
	/*if (quantity < 3)
		return quantity * price;
	else
	{
		return quantity * price - ((quantity / 3) * price);
	}*/
}

int main()
{
	cout << mango(2, 3) << endl;
	cout << mango(3, 3) << endl;
	cout << mango(5, 3) << endl;
	cout << mango(9, 5);
}
