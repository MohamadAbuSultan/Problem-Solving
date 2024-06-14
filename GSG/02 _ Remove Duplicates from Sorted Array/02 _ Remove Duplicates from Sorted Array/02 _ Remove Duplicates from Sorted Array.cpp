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

int countUnique(vector<int> duplicatedNumbers) {
    if (duplicatedNumbers.empty()) return 0;

    int uniqueCount = 1;  // Start with the first element as unique
    for (int i = 1; i < duplicatedNumbers.size(); i++) {
        if (duplicatedNumbers[i] != duplicatedNumbers[i - 1])
            uniqueCount++;
    }
    return uniqueCount;
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

    int uniqueCount = countUnique(duplicatedNumbers);
    cout << "Number of unique elements: " << uniqueCount << endl;

    return 0;
}