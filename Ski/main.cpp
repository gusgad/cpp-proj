#include <iostream>
#include <iomanip>
#include <cmath>
#include <ostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    char s;
    char sim = 'f';

    int k = 0;
    ifstream fd("ddata.txt");
    while (!fd.eof()) {
        fd.get(s);
        if (!fd.eof() && (s == sim)) k++;
    }
    fd.close();
    cout << k << endl;

    return 0;
}

