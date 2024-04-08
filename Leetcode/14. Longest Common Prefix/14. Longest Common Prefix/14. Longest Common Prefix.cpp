#include <iostream>
#include <vector>

using namespace std;

string LongestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) return "There is no common prefix among the input strings.";
    string result = "";
    for (int i = 0; i < strs[0].size(); i++)
    {
        char currentChar = strs[0][i];
        for (int j = 1; j < strs.size(); j++)
        {
            if (strs[j][i] != currentChar)
                return result;
        }
        result += currentChar;
    }
    return result;
}

int main() {
    vector<string> str = { "flower", "flower", "flower" };
    cout << LongestCommonPrefix(str);
    return 0;
}
