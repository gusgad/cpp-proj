#include <iostream>
#include <iomanip>
#include <cmath>
#include <ostream>
#include <fstream>
#include <string>

using namespace std;

struct City {
    int n;
    string city;
    string street;
    int street_len;
    int houses;
};

City St1[4];
City St2[3];

struct NewCity {
    string street;
    int street_len;
    int houses;
    string town;
};

NewCity Inf[4];

int main()
{
    // Vilnius
    int i;
    int n1;
    string city1;

    ifstream fd1("City1.txt");

    fd1 >> n1;
    fd1 >> city1;

    for (i = 0; i < n1; i++) {
        fd1 >> St1[i].street >> St1[i].street_len >> St1[i].houses;
        cout << St1[i].street << " " << St1[i].street_len << " " << St1[i].houses << endl;
    }
    fd1.close();

    cout << " " << endl;

    // Kaunas
    int n2;
    string city2;

    ifstream fd2("City2.txt");

    fd2 >> n2;
    fd2 >> city2;

    for (i = 0; i < n2; i++) {
        fd2 >> St2[i].street >> St2[i].street_len >> St2[i].houses;
        cout << St2[i].street << " " << St2[i].street_len << " " << St2[i].houses << endl;
    }
    fd2.close();

    cout << " " << endl;


    // New City;
    int k = 0;

    for(i = 0; i < n1; i++) {
        if ((St1[i].street_len > 2) && (St1[i].houses < 150)) {

            Inf[k].street = St1[i].street;
            Inf[k].street_len = St1[i].street_len;
            Inf[k].houses = St1[i].houses;
            Inf[k].town = St1[i].city;
            k++;
        }
    }

    for(i = 0; i < 3; i++) {
        cout << St2[i].street_len << " " << St2[i].houses << k << endl;
        if ((St2[i].street_len > 2) && (St2[i].houses < 150)) {

            Inf[k].street = St2[i].street;
            Inf[k].street_len = St2[i].street_len;
            Inf[k].houses = St2[i].houses;
            Inf[k].town = St2[i].city;
            k++;
        }
    }

    cout << k << endl;
    cout << "------" << endl;
    for(i = 0; i < k; i++) {
        cout << Inf[i].street << " " << Inf[i].street_len << " " << Inf[i].houses << " " << Inf[i].town << endl;
    }
    cout << "------" << endl;









    return 0;
}
