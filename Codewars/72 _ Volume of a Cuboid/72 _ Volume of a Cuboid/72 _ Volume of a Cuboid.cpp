
#include <iostream>

using namespace std;

double getVolumeOfCuboid(double length, double width, double height) {
    return length * width * height;
}

int main()
{
    cout << getVolumeOfCuboid(10, 10, 10);
}
