#include <iostream>
#include <iomanip>
#include <cmath>
#include <ostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    char s;
    char v = 'v';
    char capitV = 'V';

    ifstream fd("data.txt");
    ofstream rd("result.txt");
    while (!fd.eof()) {
        fd.get(s);
        if (s == v) {
            rd << capitV;
        } else {
            rd << s;
        }
    }
    return 0;
}
