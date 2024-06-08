#include <iostream>
#include <vector>

using namespace std;

vector<int>	findVisibleBuildings(vector<int> heightsOfBuildings) {
	int maxHeight = 0;
	vector<int> numberOfBuildingsSees;
	for (int i = 0; i < heightsOfBuildings.size(); i++)
		if (heightsOfBuildings[i] > maxHeight) {
            maxHeight = heightsOfBuildings[i];
			numberOfBuildingsSees.push_back(maxHeight);
		}
	return numberOfBuildingsSees;
}

int main()
{
    vector<int> heightsOfBuildings = { 1,7,4,5,8,2,10,9,11,15,14 };
    vector<int> result = findVisibleBuildings(heightsOfBuildings);

    cout << "Buildings the person can see: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i != result.size() - 1) {
            cout << ", ";
        }
    }
    cout << endl;

    return 0;
}