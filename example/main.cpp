#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;
const char datafile[] = "sefat.txt";
const char datafile1[] = "sefat1.txt";
const int arrsize = 100;
const int name = 25;
struct Readerdetails
{
	string name;
	string Reader_ID;
	string tel_no;
	string book1_ID;
	string book2_ID;
	string book3_ID;
};
struct booksdetail
{
	string title;
	string book2_ID;
	string year;
};
class Readers
{
public:
	Readerdetails A[10];
	int amount;
	void Readfromfile(const char datafile[]);
	void printscreen();
};
class Books
{
public:

	booksdetail A[10];
	int amount;
	void Readfromfile(const char datafile1[]);
	void printscreen();
};
void Readers::Readfromfile(const char datafile[])
{
	ifstream fd(datafile);
	char arr[name];
	fd >> amount;
	fd.ignore(80, '\n');
	for (int i = 0; i < amount; i++)
	{
		fd.get(arr, name);
		A[i].name = arr;
		fd >> A[i].Reader_ID >> A[i].tel_no >> A[i].book1_ID >> A[i].book2_ID >> A[i].book3_ID;
		fd.ignore(80, '\n');
	}
	fd.close();
}
void Books::Readfromfile(const char datafile1[])
{
	ifstream fd(datafile1);
	char arr[name];
	fd >> amount;
	fd.ignore(80, '\n');
	for (int i = 0; i < amount; i++)
	{
		fd.get(arr, name);
		A[i].title = arr;
		fd >> A[i].book2_ID >> A[i].year;
		fd.ignore(80, '\n');
	}
	fd.close();
}
void Readers::printscreen()
{
	for (int i = 0; i < amount; i++)
		cout << A[i].name << "   " << A[i].Reader_ID << "   " << A[i].tel_no << "   " << A[i].book1_ID << "   " << A[i].book2_ID << "   " << A[i].book3_ID << "  " << endl;
	}
void Books::printscreen()
{
	for (int i = 0; i < amount; i++)
		cout << A[i].title << "   " << A[i].book2_ID << "   " << A[i].year << "   " << endl;
}
int main()
{
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << "                             Readers details                                 " << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	Readers Reader_object;
	Reader_object.Readfromfile(datafile);
	Reader_object.printscreen();
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << "                             Books details                                   " << endl;
	cout << "-----------------------------------------------------------------------------" << endl;

	Books Books_object;
	Books_object.Readfromfile(datafile1);
	Books_object.printscreen();
    cout << endl;
    cout << endl;

	for (int i = 0; i < 3; i++)
        {
            cout << Reader_object.A[i].Reader_ID << endl;
            cout << Reader_object.A[i].name << endl;
        for (int j = 0; j < 9; j++)
        {
            if (Reader_object.A[i].book1_ID == Books_object.A[j].book2_ID)
            {
                cout << Reader_object.A[i].book1_ID << "-" << Books_object.A[j].title << endl;
            }
            if (Reader_object.A[i].book2_ID == Books_object.A[j].book2_ID)
            {
                cout << Reader_object.A[i].book2_ID << "-" << Books_object.A[j].title << endl;
            }
            if (Reader_object.A[i].book3_ID == Books_object.A[j].book2_ID)
            {
                cout << Reader_object.A[i].book3_ID << "-" << Books_object.A[j].title << endl;
                cout << endl;
                cout << "-----------------------------------------------------------------------------" << endl;
                cout << endl;
            }
        }
	}

	return 0;

}
