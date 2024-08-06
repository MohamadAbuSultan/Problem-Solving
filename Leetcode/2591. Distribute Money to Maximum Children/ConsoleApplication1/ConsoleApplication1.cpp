#include <iostream>
#include <algorithm>

using namespace std;

int distMoney(int money, int children) {
    if (money < children) return -1;
    if (money == children * 8) return children;
    if (money > children * 8) return children - 1;

    // money < children * 8
    money -= children;
    int count = money / 7;
    int remaining = money % 7;
    children -= count;

    if ((remaining == 3) && (children == 1))
        count--;
    return count;
}

int main()
{
    cout << "Test Case 1: " << distMoney(20, 3) << endl;  
    cout << "Test Case 2: " << distMoney(16, 2) << endl;  
    cout << "Test Case 3: " << distMoney(10, 2) << endl;  
    cout << "Test Case 4: " << distMoney(25, 4) << endl;  
    cout << "Test Case 5: " << distMoney(30, 5) << endl;  
}