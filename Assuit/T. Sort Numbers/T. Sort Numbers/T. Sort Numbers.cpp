#include <iostream>
#include <algorithm> 

using namespace std;

void ReadNumbers(int arr[3]) {
    for (int i = 0; i < 3; i++)
        cin >> arr[i];
}

void PrintResult(int arr[3])
{
    for (int i = 0; i < 3; i++)
        cout << arr[i] << endl;
}

int main() {
    int arr[3];
    int arr2[3];
    ReadNumbers(arr);
    for (int i = 0; i < 3; i++) 
        arr2[i] = arr[i]; 
    sort(arr2, arr2 + 3);
    PrintResult(arr2);
    cout << endl;
    PrintResult(arr); 
}
