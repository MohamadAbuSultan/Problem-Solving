
#include <iostream>
#include <vector>

using namespace std;

int get_average(vector <int> marks)
{
    int result = 0;
    for (int i = 0; i < marks.size(); i++) {
        result += marks[i];
    }
    return result / marks.size();
}

int main()
{
    cout << get_average({ 2,2,2,2 });
}