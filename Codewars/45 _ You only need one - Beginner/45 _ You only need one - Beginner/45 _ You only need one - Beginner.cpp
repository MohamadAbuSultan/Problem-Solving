
#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool check(const std::vector<std::string>& seq, const std::string& elem) {
    for (int i = 0; i < seq.size(); i++)
    {
        if (seq[i] == elem)
            return true;
    }
    return false;
}

int main()
{
    vector<string> seq = { "s0", "s1" };
    cout << check(seq, "s0") << endl;
    cout << check(seq, "s1") << endl;
    cout << check(seq, "s2") << endl;
}