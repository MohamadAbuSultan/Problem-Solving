#include <iostream>
#include <string>

using namespace std;

string remove_vowels(const string& str) {
    string vowels = "aeiou";
    string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (vowels.find(str[i]) == str.npos /*string::npos or str.npos بنكتب إسم المتغير مكان كلمة سترينق*/) {
            result += str[i];
        }
    }
    /*
    * الشرح من تشات جي بي تي ، الحل تافه (مني طبعاً) وشكراً
    std::string::npos is a constant value
    used in C++ to represent the largest possible value for the std::string::size_type type.
    It is typically used to indicate the absence
    or failure of a search operation within a string,
    such as when searching for a substring.
    If a search operation does not find the desired element or position,
    it returns std::string::npos to signify that the search was unsuccessful.
    This constant helps programmers check whether a search operation was successful or not
    when working with C++ strings.
    */
    return result;
}
int main()
{
    cout << remove_vowels("some value");
}
