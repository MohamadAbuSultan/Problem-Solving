
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string twoSort(vector<string> s)
{
	/*sort(s.begin(), s.end());
	string result = s.at(0);*/
	string result = *min_element(s.begin(), s.end());
	for (int i = 1; i < result.length(); i+=4)
	{
		result.insert(i, "***");
	}
	return result;
}
int main()
{
	cout << twoSort(vector<std::string>{ "turns", "out", "random", "test", "cases", "are", "easier", "than", "writing", "out", "basic", "ones" });
}