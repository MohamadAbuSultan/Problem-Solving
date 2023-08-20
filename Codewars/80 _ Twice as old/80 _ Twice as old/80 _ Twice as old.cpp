
#include <iostream>

using namespace std;

int twice_as_old(int dad, int son) {
	
	return abs(dad - (son * 2));

	////// حل م.أسامة الزيرو
	//  son = 7 , dad = 36
	////int son2x = son * 2; // 14 
	////int dadreach = dad - son2x; // 22
	////if (dadreach < 0) dadreach *= -1;
	////return dadreach;
	
	/*
	ما زبط معي 
	int counter = 0;
	for (int i = 0; i < 50; i++)
	{

		++son;
		++dad;
		if (son > (dad / 2)) break;
		++counter;
	}
		
	return counter;*/
}

int main()
{
	cout << twice_as_old(36, 7) << endl;
	cout << twice_as_old(55, 30) << endl;
	cout << twice_as_old(42, 21) << endl;
	cout << twice_as_old(22, 1) << endl;
	cout << twice_as_old(29, 0) << endl;
}
