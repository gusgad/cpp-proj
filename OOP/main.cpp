#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <ostream>
#include <string>
using namespace std;
const char CData[] = "data.txt";
const int Cn = 100;
const int Cpav = 20;
struct Skier {
     string country;
     string name;
     char gender;
     double weight;
     int age;
};
Skier A[Cn]; int n;
void Readfromfile (const char fileName[]);
void Sortdata ();
int main()
{
    int i, k=0, kk=0;
    double averageweight=0;
    string whichcountry, whichname;
    char whichgender;
    cout << "Data about skiers:"<< endl;
    cout << " Country Name Gender Weight Age" << endl;
    Readfromfile (CData);
    cout << " Which record is to be deleted?" << endl;
    cin >> kk;
    for (i=kk-1; i<n-1; i++) {
     A[i].country = A[i+1].country;
     A[i].name = A[i+1].name;
     A[i].gender = A[i+1].gender;
     A[i].weight = A[i+1].weight;
     A[i].age = A[i+1].age;
     }
    n=n-1;
    cout << " The list of skiers after removal:" << endl;
    for (i=0; i<n; i++)
    cout << A[i].country<< " " << A[i].name << " "<< A[i].gender << " "<< A[i].weight
    << " "<< A[i].age << endl;
    cout << " Which country skiers to be shown?" << endl;
    cin >> whichcountry;
    for (i=0; i<n; i++) {
    if (A[i].country == whichcountry)
    cout << A[i].country<< " " << A[i].name << " "<< A[i].gender << " "<< A[i].weight
    << " "<< A[i].age << endl;
    }
    cout << " Enter skiers name:" << endl;
    cin >> whichname;
    for (i=0; i<n; i++) {
    if (A[i].name == whichname)
    cout << A[i].country<< " " << A[i].name << " "<< A[i].gender << " "<< A[i].weight
    << " "<< A[i].age << endl;
    }
    cout << " Which gender average weight to be found (enter m - man or w - woman)?"
    << endl;
    cin >> whichgender;
    for (i=0; i<n; i++)
    if (A[i].gender == whichgender) {
     averageweight = averageweight+A[i].weight;
     k = k + 1;
     }
    averageweight=averageweight/k;
    cout << " Chosen gender " << whichgender << " skiers average weight is: " <<
    averageweight << endl;
    Sortdata();
    return 0;
    }
    void Readfromfile (const char fileName[])
    {
    int i;
    ifstream fd(fileName);
    fd>>n;
    for (i=0; i<n; i++) {
    fd >> A[i].country >> A[i].name >> A[i].gender >> A[i].weight >> A[i].age;
    cout << A[i].country<< " " << A[i].name << " "<< A[i].gender << " "<< A[i].weight
    << " "<< A[i].age << endl;
    }
    fd.close ();
    }
    void Sortdata ()
    {
    for (int i=0; i<n; i++)
     for (int j=i+1; j<n; j++)
     if ( A[j].name[0] < A[i].name[0]) {
     string country = A[i].country; A[i].country = A[j].country; A[j].country=country;
     string name = A[i].name; A[i].name = A[j].name; A[j].name = name;
     char gender = A[i].gender; A[i].gender = A[j].gender; A[j].gender = gender;
     double weight = A[i].weight; A[i].weight = A[j].weight; A[j].weight = weight;
     int age = A[i].age; A[i].age = A[j].age; A[j].age = age;
     }
    cout << " The lis of skiers sorted by name:" << endl;
    for (int i=0; i<n; i++)
    cout << A[i].country<< " " << A[i].name << " "<< A[i].gender << " "<< A[i].weight
    << " "<< A[i].age << endl;
}
