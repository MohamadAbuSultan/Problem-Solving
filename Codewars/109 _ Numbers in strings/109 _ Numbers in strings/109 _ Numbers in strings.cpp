#include <iostream>
#include <string>

using namespace std;

bool IsCurrentGreaterThanMaxNumber(int currentNumber, int& maxNumber) {
    // send maxNumber by ref
    if (currentNumber > maxNumber) {
        maxNumber = currentNumber;
        return true;
    }
    return false;
}

int solve(string input) {
    int maxNumber = 0;
    int currentNumber = 0;

    for (char c : input) {
        if (isdigit(c)) {
            currentNumber = currentNumber * 10 + (c - '0');
        }
        else {
            IsCurrentGreaterThanMaxNumber(currentNumber, maxNumber);
            currentNumber = 0;
        }
    }

    IsCurrentGreaterThanMaxNumber(currentNumber, maxNumber);

    return maxNumber;
}

int main() {
    cout << solve("gh12cdy695m1"); 
    return 0;
}

//#include <iostream>
//using namespace std;
//
//int solve(string input) {
//    int maxNumber = 0;
//    int currentNumber = 0;
//
//    for (char c : input) {
//        if (isdigit(c)) {
//            currentNumber = currentNumber * 10 + (c - '0');
//        }
//        else {
//            if (currentNumber > maxNumber)
//                maxNumber = currentNumber;
//            currentNumber = 0;
//        }
//    }
//    if (currentNumber > maxNumber) {
//        maxNumber = currentNumber;
//    }
//
//    return maxNumber;
//}
//
//int main()
//{
//    cout << solve("gh12cdy695m1");
//}
