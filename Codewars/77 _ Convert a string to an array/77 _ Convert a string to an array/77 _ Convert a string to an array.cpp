#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> string_to_array(const string& String) {
    vector<string> result;
    string temp = "";
    for (auto character : String)
    {
        if (character != ' ') {
            temp += character;
        }
        else {
            result.push_back(temp);
            temp.clear();
        }
    }
    result.push_back(temp);
    return result;
}

int main()
{
    vector<string> result = string_to_array("some value");
}