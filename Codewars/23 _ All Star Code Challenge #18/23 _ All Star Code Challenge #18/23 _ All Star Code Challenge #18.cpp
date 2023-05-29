
#include <iostream>
#include <string>

using namespace std;

unsigned int strCount(const string& word, char letter) {
    int count = 0;
    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] == letter)
            count++;
    }
    return count;
}
int main()
{
    cout << strCount("Hello World", 'l');
}
