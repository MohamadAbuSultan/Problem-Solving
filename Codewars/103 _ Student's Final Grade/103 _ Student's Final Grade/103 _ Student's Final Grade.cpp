﻿
#include <iostream>

using namespace std;

int final_grade(int exam, int projects) {
    return exam >= 90 || projects >= 10 ? 100
        : exam >= 75 && projects >= 5 ? 90
        : exam >= 50 && projects >= 2 ? 75 : 0;
}

int main()
{
    cout << final_grade(75, 5);
}