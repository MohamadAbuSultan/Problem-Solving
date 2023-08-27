#include <iostream>

using namespace std;

char getGrade(int a, int b, int c) {
    int avg = (a + b + c) / 3;
    char grade;
    switch (avg) {
    case 90 ... 100:
        grade = 'A';
        break;
    case 80 ... 89:
        grade = 'B';
        break;
    case 70 ... 79:
        grade = 'C';
        break;
    case 60 ... 69:
        grade = 'D';
        break;
    default:
        grade = 'F';
        break;
    }
    return grade;
}

int main() {
    int a = 80, b = 90, c = 95;
    cout << "The grade is " << getGrade(a, b, c) << endl;
}