
#include <vector>
#include <iostream>
#include <numeric>

using namespace std;

int sum(vector<int> numbers) {
    
    return reduce(numbers.begin(), numbers.end()); // بتاخذ العناصر من أول مكان معين لعند المكان إلي بتحدده أنت وبتجمع كل العناصر إلي حددتها وبترجعلك قيمة واحدة
    
    /*int number = 0;

    if (numbers.size() == 0) return 0;
    
    for (int i = 0; i < numbers.size(); i++)
    {
        number += numbers[i];
    }

    return number;*/

}

int main()
{
    cout << sum({ 1, 2, 3, 4 });
    cout << sum({ 1, 2, -3, 3, 4 });
    cout << sum({ 5 });

    return 0;
}
