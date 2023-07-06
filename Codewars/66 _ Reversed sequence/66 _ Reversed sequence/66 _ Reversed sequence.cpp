
#include <iostream>
#include <vector>

using namespace std;

vector<int> reverseSeq(int n) {
	vector<int> vect;

	for (int i = n; i >= 1; i--)
	{
		vect.push_back(i);
	}

	return vect;
}

int main()
{
	reverseSeq(5);
}
