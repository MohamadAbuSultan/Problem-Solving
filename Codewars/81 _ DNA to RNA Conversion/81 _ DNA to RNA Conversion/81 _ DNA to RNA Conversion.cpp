
#include <iostream>
#include <string>

using namespace std;

string DNAtoRNA(string dna) {
    replace(dna.begin(), dna.end(), 'T', 'U');
    return dna;
}

int main()
{
    cout << DNAtoRNA("GCAT");
}