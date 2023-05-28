#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int size;
    cin >> size;

    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    /*int n = 0;
    cin >> n;

    int a[100];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
    */

}