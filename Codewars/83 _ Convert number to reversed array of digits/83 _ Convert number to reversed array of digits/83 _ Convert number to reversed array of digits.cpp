

#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> digitize(unsigned long n)
{
	vector<int> result;
	string str = to_string(n);
	reverse(str.begin(), str.end());
	for (int i = 0; i < str.length(); i++)
	{
		result.push_back(str[i] - '0');
		/* ليش طرحنا من الصفر ؟
			ASCII Code لأنو هذا بكون أسكي كود
			الصفر بمثل رقم 48 بالأسكي
			لو بدنا نجيب رقم 7 مثلاً ، 7 تمثل 55 بالأسكي ،
			ف هنطرح 55 من ال 48 إلي هي الصفر ف بينتج 7 
			وشكراً
		*/

		/* في حل ثاني
		* while طبعاً هذا داخل وايل لوب
		* 
		digits.push_back (n % 10); 
        n /= 10;
		*/
	}
	return result;
}

int main()
{
	vector<int> result = digitize(12345);;
	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << " ";
	}
}

