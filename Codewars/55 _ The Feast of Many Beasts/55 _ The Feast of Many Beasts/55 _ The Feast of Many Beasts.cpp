
#include <iostream>
#include <string>

using namespace std;

bool feast(std::string beast, std::string dish) {
    for (int i = 0; i < beast.length(); i++)
    {
        if (beast[0] == dish[0] && beast[beast.length() - 1] == dish[dish.length() - 1])
            return true;
    }
    return false;
}
int main()
{
    cout << feast("great blue heron", "garlic naan") << endl;
    cout << feast("chickadee", "chocolate cake") << endl;
    cout << feast("brown bear", "bear claw");
}