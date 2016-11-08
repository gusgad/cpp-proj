#include <iostream>
#include <iomanip>
#include <cmath>
#include <ostream>
#include <fstream>
#include <string>

using namespace std;

struct Food {
    string name;
    string country;
    int cooking_time;
    int price;
};

Food A[9];

int main()
{
    int i;
    int j;
    int len;
    string sortName;

    ifstream file("text.txt");

    file >> len;

    for (i = 0; i < len; i++){
        file >> A[i].name >> A[i].country >> A[i].cooking_time >> A[i].price;
        cout << A[i].name << " " << A[i].country << " " << A[i].cooking_time << " " << A[i].price << endl;
    }


    cout << "Sort by name: " << endl;

    for (i = 0; i < len; i++) {
        cout << i << endl;
        for (j = i; j < len; j++) {
                cout << j << endl;
        }
    }

    /*cout << A[i].name << " " << A[i].country << " " << A[i].cooking_time << " " << A[i].price << endl;*/


    return 0;
}






