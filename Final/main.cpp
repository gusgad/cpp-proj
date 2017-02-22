#include <iostream>

using namespace std;

struct student {
    string stnumber;
    string stname;
    string sex;
    float quizz1;
    float quizz2;
    float assignment;
    float midterm;
    float final;
    float total;
};


int main()
{
    student member[4];

    /* Students */
    // student 1
    member[0].stnumber = "1";
    member[0].stname = "Sylvester Stallone";
    member[0].sex = "Male";
    member[0].quizz1 = 8;
    member[0].quizz2 = 6;
    member[0].assignment = 9;
    member[0].midterm = 8;
    member[0].final = 5;
    member[0].total = 7.2;

    // student 2
    member[1].stnumber = "2";
    member[1].stname = "Jackie Chan";
    member[1].sex = "Male";
    member[1].quizz1 = 5;
    member[1].quizz2 = 9;
    member[1].assignment = 10;
    member[1].midterm = 10;
    member[1].final = 7;
    member[1].total = 8.2;

    // student 3
    member[2].stnumber = "3";
    member[2].stname = "Arnold Schwarzenegger";
    member[2].sex = "Male";
    member[2].quizz1 = 10;
    member[2].quizz2 = 9;
    member[2].assignment = 3;
    member[2].midterm = 3;
    member[2].final = 10;
    member[2].total = 7;

    // student 4
    member[3].stnumber = "4";
    member[3].stname = "Chuck Norris";
    member[3].sex = "Male";
    member[3].quizz1 = 9;
    member[3].quizz2 = 7;
    member[3].assignment = 8;
    member[3].midterm = 9;
    member[3].final = 10;
    member[3].total = 8.6;


    /* Printing */
    cout << "Students" << endl;
    for (int i = 0; i < 4; i++) {
        cout << "- " << member[i].stname << endl;
    }

    /*  Max grade total */
    float max_final = 0;
    string max_stud;
    for (int i = 0; i < 4; i++) {
        for (int j = i; j < 4; j++) {
            if (member[j].total > member[j-1].total) {
                max_final = member[j].total;
                max_stud = member[j].stname;
            }
        }
    }
    cout << "Stud with max grade is " << max_stud << endl;


    /* Deleting and grade average */
    string selected;
    cout << "Enter stnumber to delete and calculate average:";
    cin >> selected;
    cout << selected << endl;

    float avg;
    for (int i = 0; i < 4; i++) {
        if (member[i].stnumber == selected) {
            avg = (member[i].quizz1 + member[i].quizz2 + member[i].assignment + member[i].midterm + member[i].final) / 5;
        }
    }
    cout << "Average is " << avg;

    for (int i = 0; i < 4; i++) {
        if (member[i].stnumber == selected) {
            member[i] = member[i+1];
        }
    }
    member[3];


    cout << "St. number" << " " << "St. name" << " " << "Sex" << endl;
    for (int i = 0; i < 4; i++) {
        cout << member[i].stnumber << " " << member[i].stname << " " << member[i].sex << endl;
    }
}
