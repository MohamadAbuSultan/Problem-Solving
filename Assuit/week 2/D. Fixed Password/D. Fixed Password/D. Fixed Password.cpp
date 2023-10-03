
#include <iostream>
#include <vector>

using namespace std;

//
//vector<int> InputNumbers() {
//	int size = 5;
//	vector<int> v1(size);
//	for (int i = 0; i < size; i++)
//	{
//		cin >> v1[i];
//	}
//	return v1;
//}

int main() {
	int number;
	do {
		cin >> number;
		if (number != 1999)
			cout << "Wrong\n";
	} while (number != 1999);
	cout << "Correct";

	//	const int correctNumber = 1999;
	//	vector<int> numbers = InputNumbers();
	//	for (int i = 0; i < 5; i++)
	//	{
	//		if (numbers[i] == correctNumber) {
	//			cout << "Correct";
	//			break;
	//		}
	//		else cout << "Wrong" << endl;
	//	}
}
