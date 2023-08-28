
#include <iostream>

using namespace std;

int rental_car_cost(int d) {
    return d >= 7 ? d * 40 - 50 : d >= 3 ? d * 40 - 20 : d * 40;
}

int main()
{
    cout << rental_car_cost(1) << endl;
    cout << rental_car_cost(2) << endl;
    cout << rental_car_cost(3) << endl;
    cout << rental_car_cost(4) << endl;
    cout << rental_car_cost(5) << endl;
    cout << rental_car_cost(6) << endl;
    cout << rental_car_cost(7) << endl;
    cout << rental_car_cost(8) << endl;
    cout << rental_car_cost(9) << endl;
    cout << rental_car_cost(10);
}