#include <iostream>
#include <fstream>

using namespace std;

// Task 2
const char datafile1[] = "data1.txt";
const char datafile2[] = "data2.txt";
const int arrsize = 100;
const int name = 15;

struct Product {
    string prodname;
    double prodprice;
    int prodamount;
    double wholeprice;
 };

 class Buyer {
    public:
        Product products_list[arrsize];
        int n;
        double sum;
        void Datafromfile(const char fv[]);
        void Payments();

    private:
        void Money();
 };

 void Buyer::Datafromfile(const char fv[]) {
    ifstream fin(fv);
    fin >> n;
    for (int i = 0; i < n; i++) {
        fin >> products_list[i].prodname >> products_list[i].prodprice >> products_list[i].prodamount;
    }
 };

 void Buyer::Payments() {
    for (int i = 0; i < n; i++) {
        cout << "-    " << products_list[i].prodname << " " << products_list[i].prodprice << " " << products_list[i].prodamount << endl;
    }
    Money();
 };

 void Buyer::Money() {
    sum = 0;
    for (int i = 0; i < n; i++) {
        sum += products_list[i].prodprice * products_list[i].prodamount;
    }

    cout << "-------------------" << endl;
    cout << "FINAL SUM: " << sum << endl;
};

// Task 1
/*class Computer {
    public :
        string name;
        int RAM;
        double proc_speed;
        void enter_data(string x, int y, double z) {
            name = x;
            RAM = y;
            proc_speed = z;
        };
        void print_data() {
            cout << "Computer name: " << name << endl;
            cout << "RAM: " << RAM << endl;
            cout << "Processor speed: " << proc_speed << endl;
        };
};*/


int main()
{
    // Task 1
    /*Computer computer1, computer2, computer3;
    computer1.enter_data("MacBook Air", 8, 4.2);
    computer2.enter_data("Dell Inspiron", 4, 3.1);
    computer3.enter_data("Packard Bell EN", 4, 2.7);

    computer1.print_data();
    computer2.print_data();
    computer3.print_data();*/

    // Task 2
    Buyer buyer1;
    Buyer buyer2;
    buyer1.Datafromfile(datafile1);
    buyer2.Datafromfile(datafile2);

    cout << "     " << "PAYMENTS" << endl;
    cout << "-------------------" << endl;
    buyer1.Payments();

    cout << "" << endl;

    cout << "     " << "PAYMENTS" << endl;
    cout << "-------------------" << endl;
    buyer2.Payments();

    cout << "" << endl;
    cout << "" << endl;

    cout << "Total sum of 2 buyers: " << buyer1.sum + buyer2.sum << endl;
    return 0;
}
