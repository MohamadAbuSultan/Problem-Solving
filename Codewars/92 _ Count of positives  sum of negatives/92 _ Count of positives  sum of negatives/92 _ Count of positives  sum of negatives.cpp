#include <iostream>
#include <vector>

using namespace std;

vector<int> countPositivesSumNegatives(vector<int> input)
{
    if (input.size() == 0) return {};

    vector<int> result;

    int positive = 0, negative = 0;

    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] > 0)
        {
            ++positive;
        }
        else {
            negative += input[i];
        }
    }

    result.push_back(positive);
    result.push_back(negative);

    return result;
}

int main()
{
	vector<int> input = { 1, 2, -3, -4, 5 };
	vector<int> result = countPositivesSumNegatives(input);

	cout << "Positive numbers: " << result[0] << endl;
	cout << "Negative sum: " << result[1] << endl;

	return 0;
}
