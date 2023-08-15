
#include <iostream>
#include <vector>

using namespace std;

int get_average(vector <int> marks)
{
    int result = 0, counter = 0;
    for (int i = 0; i < marks.size(); i++) {
        result += marks[i];
        counter++;
    }
    return result / counter;
}

int main()
{
    cout << get_average({ 2,2,2,2 });
}