
#include <iostream>

using namespace std;

struct coord {
    int x;
    int y;
};

bool quadrant_segment(const coord& A, const coord& B) {
    return (A.x > 0) != (B.x > 0) || (A.y > 0) != (B.y > 0);
}

int main()
{
    cout << quadrant_segment({ 1, 4 }, { 9, 5 }) << endl;
    cout << quadrant_segment({ -1, 4 }, { 9, 5 }) << endl;
    cout << quadrant_segment({ 1, 4 }, { -9, 5 }) << endl;
    cout << quadrant_segment({ -1, 4 }, { -9, 5 });
}
