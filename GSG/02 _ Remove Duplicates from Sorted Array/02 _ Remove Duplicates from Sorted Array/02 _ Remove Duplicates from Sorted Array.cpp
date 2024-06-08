#include <iostream>
#include <vector>

using namespace std;

vector<int>	removeDuplicates(vector<int> duplicatedNumbers) {
	vector<int> distinctNumbers;
	for (int i = 0; i < duplicatedNumbers.size(); i++)
	{
        if (i == 0 || duplicatedNumbers[i] != duplicatedNumbers[i - 1]) 
            distinctNumbers.push_back(duplicatedNumbers[i]);
	}
    return distinctNumbers;
}

int main()
{
    vector<int> duplicatedNumbers = { 0,0,1,1,2,2,3,3,4,4,5,5,5,6,6,6 };
    vector<int> result = removeDuplicates(duplicatedNumbers);

    cout << "Non-duplicated numbers: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i != result.size() - 1) {
            cout << ", ";
        }
    }
    cout << endl;

    return 0;
}