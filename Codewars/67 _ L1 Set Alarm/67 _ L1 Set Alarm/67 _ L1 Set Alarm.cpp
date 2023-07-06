
#include <iostream>

using namespace std;

bool set_alarm(const bool& employed, const bool& vacation) {
    return employed == true ? vacation == true ? false : true : false;
    // return employed > vacation;
    // return employed and not vacation;
    // return employed && !vacation;
}

int main()
{
    cout << set_alarm(true, true);
    cout << set_alarm(false, true);
    cout << set_alarm(false, false);
    cout << set_alarm(true, false);
}