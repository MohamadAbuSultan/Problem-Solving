
#include <iostream>

using namespace std;

int ReturnMax(int arrNumber[]) {
	int size;
	cin >> size; 
	int max = 0;
	for (int i = 0; i < size; i++)
	{
		cin >> arrNumber[i];
		if (max < arrNumber[i])
			max = arrNumber[i];
	}
	arrNumber[size] -= max;
	return max;
}

int main()
{
	int numberSereja = 0, numberDima = 0;
	int arrNumber[100];
	int size = 0;
	int N = ReturnMax(arrNumber);
	for (int i = 0; i < size; i++)
	{
		numberSereja += N;
		numberDima += N;
	}
	cout << numberSereja << numberDima;
}