#include <iostream>
#include <fstream>
using namespace std;

int const MAX = 51;

int main() {
    // create file object and open the datafile 
    ifstream infile("read.txt");
    if (!infile) {
        cerr << "File could not be opened." << endl;
        return 1;
    }

    for (;;) {
        char s[MAX];
        infile.getline(s, MAX);
        if (infile.eof()) break;
        cout << s << endl;
    }
    return 0;
}