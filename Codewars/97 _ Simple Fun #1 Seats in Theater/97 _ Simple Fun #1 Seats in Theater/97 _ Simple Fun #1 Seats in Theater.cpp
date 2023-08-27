#include <iostream>

using namespace std;

int seats_in_theater(int total_col, int total_row, int col, int row) {
	
	return (total_col - (col - 1)) * (total_row - row);

	// هذا حلي ، أنا حاله صح بدون ما أفهم السؤال ههههههه
	// return (total_col - col) * (total_row - row) + total_row - row;

}

int main()
{
	cout << seats_in_theater(16, 11, 5, 3) << endl;
	cout << seats_in_theater(1, 1, 1, 1);
}
