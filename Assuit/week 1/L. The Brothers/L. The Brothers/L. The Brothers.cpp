#include <iostream>
#include <string>

using namespace std;

int main() {
	string FName1, FName2, LName1, LName2;
	cin >> FName1 >> LName1;
	cin >> FName2 >> LName2;
	if (LName1 == LName2) cout << "ARE Brothers";
	else cout << "NOT";
}
