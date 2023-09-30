#include <iostream>

using namespace std;

int main() {
    float number1, number2;
    cin >> number1 >> number2;
    if (number1 == 0.0 && number2 == 0.0)
        cout << "Origem" << endl;
    else if (number1 == 0.0)
        cout << "Eixo Y" << endl;
    else if (number2 == 0.0)
        cout << "Eixo X" << endl;
    else if (number1 > 0 && number2 > 0)
        cout << "Q1" << endl;
    else if (number1 < 0 && number2 > 0)
        cout << "Q2" << endl;
    else if (number1 < 0 && number2 < 0)
        cout << "Q3" << endl;
    else
        cout << "Q4" << endl;

    return 0;
}
