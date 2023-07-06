


#include <iostream>

using namespace std;

int combat(int health, int damage) {
    return health > damage ? health - damage : 0;
}

int main()
{
    cout << combat(100, 5);
}

