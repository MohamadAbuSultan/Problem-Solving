

#include <iostream>
#include <vector>

using namespace std;

int count_sheep(vector<bool> arr)
{
    int number = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        number += (int)(arr[i]);
    }
    return number;
}



int main()
{
    vector<bool> array1 = { true,  true,  true,  false,
                            true,  true,  true,  true ,
                            true,  false, true,  false,
                            true,  false, false, true ,
                            true,  true,  true,  true ,
                            false, false, true,  true };
    cout << count_sheep(array1);
}
