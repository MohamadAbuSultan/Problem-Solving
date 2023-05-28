

#include <iostream>

using namespace std;

int main()
{
	int contestParticipants, petyaParticipants, vasyaParticipants, tonyaParticipants, counter = 0;
	cin >> contestParticipants;
	for (int i = 0; i < contestParticipants; i++)
	{
		cin >> petyaParticipants >> vasyaParticipants >> tonyaParticipants;
		int result = petyaParticipants + vasyaParticipants + tonyaParticipants;

		if (result > 1)
			counter++;
	}
	cout << counter;
}
