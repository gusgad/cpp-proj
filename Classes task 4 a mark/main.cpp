#include <iostream>
#include <fstream>

using namespace std;

// Task 2
const char students[] = "Students.txt";
const char subjects[] = "Subjects.txt";
const char marks[] = "Marks.txt";
const char groups[] = "Groups.txt";
const int arrsize = 100;

struct StudentsStrc {
    int Stud_ID;
    string name;
    string surname;
    int tel_no;
 };

 struct SubjectsStrc {
    int Subject_ID;
    string name;
    int credits;
 };

 struct MarksStrc {
    int Subject_ID;
    int Stud_ID;
    int Group_ID;
    int mark;
 };

 struct GroupsStrc {
    int Group_ID;
    int semester;
    int Stud_ID;
    int Subject1_ID;
    int Subject2_ID;
    int Subject3_ID;
    int Subject4_ID;
    int Subject5_ID;
 };

 class Student {
    public:
        StudentsStrc student_list[arrsize];
        void Datafromfile(const char fv[]);
 };

 void Student::Datafromfile(const char fv[]) {
    ifstream fin(fv);
    for (int i = 0; i < 4; i++) {
        fin >> student_list[i].Stud_ID >> student_list[i].name >> student_list[i].surname >> student_list[i].tel_no;
    }
 };

class Subject {
    public:
        SubjectsStrc subject_list[arrsize];
        void Datafromfile(const char fv[]);
 };

 void Subject::Datafromfile(const char fv[]) {
    ifstream fin(fv);
    for (int i = 0; i < 8; i++) {
        fin >> subject_list[i].Subject_ID >> subject_list[i].name >> subject_list[i].credits;
    }
 };

 class Mark {
    public:
        MarksStrc mark_list[arrsize];
        void Datafromfile(const char fv[]);
 };

 void Mark::Datafromfile(const char fv[]) {
    ifstream fin(fv);
    for (int i = 0; i < 17; i++) {
        fin >> mark_list[i].Subject_ID >> mark_list[i].Stud_ID >> mark_list[i].Group_ID >> mark_list[i].mark;
    }
 };

 class Group {
    public:
        GroupsStrc group_list[arrsize];
        void Datafromfile(const char fv[]);
 };

void Group::Datafromfile(const char fv[]) {
    ifstream fin(fv);
    for (int i = 0; i < 4; i++) {
        fin >> group_list[i].Group_ID >> group_list[i].semester >> group_list[i].Stud_ID >> group_list[i].Subject1_ID >> group_list[i].Subject2_ID >> group_list[i].Subject3_ID >> group_list[i].Subject4_ID >> group_list[i].Subject5_ID;
    }
 };


int main()
{
    cout << "---------------------------------------------------------------------" << endl;

    Student studentsObj;
    studentsObj.Datafromfile(students);

    Subject subjectsObj;
    subjectsObj.Datafromfile(subjects);

    Mark marksObj;
    marksObj.Datafromfile(marks);

    Group groupsObj;
    groupsObj.Datafromfile(groups);


    // Student 1
    cout << "                  " << studentsObj.student_list[1].Stud_ID << " " << studentsObj.student_list[1].name << " " << studentsObj.student_list[1].surname << endl;
    cout << " " << endl;

    int PetraitisMathematics;
    int PetraitisPhilosophy;
    int PetraitisMarketing;
    int PetraitisHistory;
    int PetraitisInformatics;
    int PetraitisCredits = 0;
    for (int i = 0; i < 17; i++) {
        if (marksObj.mark_list[i].Stud_ID == 972 && marksObj.mark_list[i].Subject_ID == 5) {
            PetraitisMathematics = marksObj.mark_list[i].mark;
        }
        if (marksObj.mark_list[i].Stud_ID == 972 && marksObj.mark_list[i].Subject_ID == 63) {
            PetraitisPhilosophy = marksObj.mark_list[i].mark;
        }
        if (marksObj.mark_list[i].Stud_ID == 972 && marksObj.mark_list[i].Subject_ID == 87) {
            PetraitisMarketing = marksObj.mark_list[i].mark;
        }
        if (marksObj.mark_list[i].Stud_ID == 972 && marksObj.mark_list[i].Subject_ID == 85) {
            PetraitisHistory = marksObj.mark_list[i].mark;
        }
        if (marksObj.mark_list[i].Stud_ID == 972 && marksObj.mark_list[i].Subject_ID == 73) {
            PetraitisInformatics = marksObj.mark_list[i].mark;
        }
    }

    for (int i = 0; i < 8; i++) {
        if (subjectsObj.subject_list[i].Subject_ID == 5) {
            PetraitisCredits += subjectsObj.subject_list[i].credits;
        }
        if (subjectsObj.subject_list[i].Subject_ID == 63) {
            PetraitisCredits += subjectsObj.subject_list[i].credits;
        }
        if (subjectsObj.subject_list[i].Subject_ID == 87) {
            PetraitisCredits += subjectsObj.subject_list[i].credits;
        }
        if (subjectsObj.subject_list[i].Subject_ID == 85) {
            PetraitisCredits += subjectsObj.subject_list[i].credits;
        }
        if (subjectsObj.subject_list[i].Subject_ID == 73) {
            PetraitisCredits += subjectsObj.subject_list[i].credits;
        }

    }

    cout << "Mathematics: " << PetraitisMathematics << "|  Philosophy: " << PetraitisPhilosophy << "|  Informatics: " << PetraitisInformatics << "|  History: " << PetraitisHistory << "|  Marketing: " << PetraitisMarketing << endl;
    cout << "Credits: " << PetraitisCredits << endl;

    cout << "---------------------------------------------------------------------" << endl;



    // Student 2
    cout << "                  " << studentsObj.student_list[2].Stud_ID << " " << studentsObj.student_list[2].name << " " << studentsObj.student_list[2].surname << endl;
    cout << " " << endl;

    int RimkuvieneHistory;
    int RimkuvieneMarketing;
    int RimkuvienePhilosophy;
    int RimkuvienePhysics;
    int RimkuvieneMathematics;
    int RimkuvieneCredits = 0;
    for (int i = 0; i < 17; i++) {
        if (marksObj.mark_list[i].Stud_ID == 28 && marksObj.mark_list[i].Subject_ID == 5) {
            RimkuvieneMathematics = marksObj.mark_list[i].mark;
        }
        if (marksObj.mark_list[i].Stud_ID == 28 && marksObj.mark_list[i].Subject_ID == 63) {
            RimkuvienePhilosophy = marksObj.mark_list[i].mark;
        }
        if (marksObj.mark_list[i].Stud_ID == 28 && marksObj.mark_list[i].Subject_ID == 87) {
            RimkuvieneMarketing = marksObj.mark_list[i].mark;
        }
        if (marksObj.mark_list[i].Stud_ID == 28 && marksObj.mark_list[i].Subject_ID == 85) {
            RimkuvieneHistory = marksObj.mark_list[i].mark;
        }
        if (marksObj.mark_list[i].Stud_ID == 28 && marksObj.mark_list[i].Subject_ID == 96) {
            RimkuvienePhysics = marksObj.mark_list[i].mark;
        }
    }

    for (int i = 0; i < 8; i++) {
        if (subjectsObj.subject_list[i].Subject_ID == 85) {
            RimkuvieneCredits += subjectsObj.subject_list[i].credits;
        }
        if (subjectsObj.subject_list[i].Subject_ID == 87) {
            RimkuvieneCredits += subjectsObj.subject_list[i].credits;
        }
        if (subjectsObj.subject_list[i].Subject_ID == 63) {
            RimkuvieneCredits += subjectsObj.subject_list[i].credits;
        }
        if (subjectsObj.subject_list[i].Subject_ID == 96) {
            RimkuvieneCredits += subjectsObj.subject_list[i].credits;
        }
        if (subjectsObj.subject_list[i].Subject_ID == 5) {
            RimkuvieneCredits += subjectsObj.subject_list[i].credits;
        }

    }



    cout << "History: " << RimkuvieneHistory << "|  Marketing: " << RimkuvieneMarketing << "|  Philosophy: N" << "|  Physics: " << RimkuvienePhysics << "|  Mathematics: " << RimkuvieneMathematics << endl;
    cout << "Credits: " << RimkuvieneCredits << endl;

    cout << "---------------------------------------------------------------------" << endl;



    // Student 3
    cout << "                  " << studentsObj.student_list[3].Stud_ID << " " << studentsObj.student_list[3].name << " " << studentsObj.student_list[3].surname << endl;
    cout << " " << endl;

    int AgniauskaiteMathematics;
    int AgniauskaiteChemistry;
    int AgniauskaiteHistory;
    int AgniauskaiteMarketing;
    int AgniauskaitePhilosophy;
    int AgniauskaiteCredits = 0;
    for (int i = 0; i < 17; i++) {
        if (marksObj.mark_list[i].Stud_ID == 184 && marksObj.mark_list[i].Subject_ID == 5) {
            AgniauskaiteMathematics = marksObj.mark_list[i].mark;
        }
        if (marksObj.mark_list[i].Stud_ID == 184 && marksObj.mark_list[i].Subject_ID == 3) {
            AgniauskaiteChemistry = marksObj.mark_list[i].mark;
        }
        if (marksObj.mark_list[i].Stud_ID == 184 && marksObj.mark_list[i].Subject_ID == 85) {
            AgniauskaiteHistory = marksObj.mark_list[i].mark;
        }
        if (marksObj.mark_list[i].Stud_ID == 184 && marksObj.mark_list[i].Subject_ID == 87) {
            AgniauskaiteMarketing = marksObj.mark_list[i].mark;
        }
        if (marksObj.mark_list[i].Stud_ID == 184 && marksObj.mark_list[i].Subject_ID == 63) {
            AgniauskaitePhilosophy = marksObj.mark_list[i].mark;
        }
    }

    for (int i = 0; i < 8; i++) {
        if (subjectsObj.subject_list[i].Subject_ID == 184) {
            AgniauskaiteCredits += subjectsObj.subject_list[i].credits;
        }
        if (subjectsObj.subject_list[i].Subject_ID == 184) {
            AgniauskaiteCredits += subjectsObj.subject_list[i].credits;
        }
        if (subjectsObj.subject_list[i].Subject_ID == 184) {
            AgniauskaiteCredits += subjectsObj.subject_list[i].credits;
        }
        if (subjectsObj.subject_list[i].Subject_ID == 184) {
            AgniauskaiteCredits += subjectsObj.subject_list[i].credits;
        }
        if (subjectsObj.subject_list[i].Subject_ID == 184) {
            AgniauskaiteCredits += subjectsObj.subject_list[i].credits;
        }

    }



    cout << "Mathematics: " << AgniauskaiteMathematics << "|  Chemistry: N" << "|  History: N" << "|  Philosophy: " << AgniauskaitePhilosophy << endl;
    cout << "Credits: " << RimkuvieneCredits << endl;


    cout << "---------------------------------------------------------------------" << endl;

    return 0;
}
