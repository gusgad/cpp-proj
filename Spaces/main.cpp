#include <iostream>
#include <iomanip>
#include <cmath>
#include <ostream>
#include <fstream>
#include <string>


using namespace std;

int main()
{
    string E;
    char s;
    int i;
    int len;
    int space = 0;

    ifstream fd("text.txt");
    while (!fd.eof()) {
        getline(fd, E);
        len = E.length();

        for (i = 0; i < len; i++) {
            if (E[i] == ' ' && E[i-1] == ' ') {
                if (E[i+1] == ' ' && ((i+1) != (len-1))) {
                    space++;
                }
            }
        }

    }

    cout << space << endl;

    return 0;
}
