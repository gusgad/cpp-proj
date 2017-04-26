#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const char cars[] = "cars.txt";

struct Car {
    string brand;
    string model;
    int reg_number;
    string color;
    int year;
 };

 class Garage {
    public:
        int n;
        Car car_list[5];
        double sum;

        void readFromFile(const char fv[]);
        void numOfSilverBMW();
        void findNewest();
        void sortByBrand();
 };

 void Garage::readFromFile(const char fv[]) {
    ifstream fin(fv);
    for (int i = 0; i < 5; i++) {
        fin >> car_list[i].brand >> car_list[i].model >> car_list[i].reg_number >> car_list[i].color >> car_list[i].year;
    }
 };

 void Garage::numOfSilverBMW() {
    int numOfSilverBMW = 0;
    for (int i = 0; i < 5; i++) {
        if (car_list[i].brand == "BMW" && car_list[i].color == "silver") {
            numOfSilverBMW += 1;
        }
    }
    cout << "Number of silver BMWs: " << numOfSilverBMW << endl;
 };

 void Garage::findNewest() {
    int newestCarYear = 0;
    string newestCarBrand;
    for (int i = 0; i < 5; i++) {
        if (car_list[i].year > newestCarYear) {
            newestCarYear = car_list[i].year;
            newestCarBrand = car_list[i].brand;
        }
    }
    cout << endl;
    cout << "Newest car: " << newestCarBrand << " - " << newestCarYear << endl;
 };

 void Garage::sortByBrand() {
    Car temp;
    for (int i = 1; i < 5; i++) {
        for (int j = 0; j < (5-i); j++) {
            if (car_list[j].brand > car_list[j+1].brand) {
                temp = car_list[j];
                car_list[j] = car_list[j+1];
                car_list[j+1] = temp;
            }
        }
    }
 };

int main()
{
    Garage car;
    car.readFromFile(cars);
    for (int i = 0; i < 5; i++) {
        cout << car.car_list[i].brand << " " << car.car_list[i].model << " " << car.car_list[i].reg_number << " " <<car.car_list[i].color << " " << car.car_list[i].year << endl;
    }

    cout << "-------------------------------------" << endl;

    car.findNewest();
    car.numOfSilverBMW();
    car.sortByBrand();

    for (int i = 0; i < 5; i++) {
        cout << car.car_list[i].brand << " " << car.car_list[i].model << " " << car.car_list[i].reg_number << " " <<car.car_list[i].color << " " << car.car_list[i].year << endl;
    }
    return 0;
}
