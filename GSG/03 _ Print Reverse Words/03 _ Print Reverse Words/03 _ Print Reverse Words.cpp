#include <iostream>
#include <string>
#include <vector>

using namespace std;

void printWordsInReversedOrder(string text) {
    vector<string> words;
    int start = 0;
    int end = text.find(' ');

    while (end != string::npos) {
        words.push_back(text.substr(start, end - start));
        start = end + 1;
        end = text.find(' ', start);
    }
    words.push_back(text.substr(start)); 

    for (int i = words.size() - 1; i >= 0; i--) {
        cout << words[i] << " ";
    }
    cout << endl;
}

int main() {
    string input = "I Love Palestine!";

    printWordsInReversedOrder(input);

    return 0;
}
