#include <iostream>
#include "student.h"

int main() {

    Student student1("Epi", "Peck");
    student1.addgrade(95);
    student1.addgrade(100);
    student1.addgrade(40);
    student1.addgrade(98);
    student1.addgrade(100);
    student1.addgrade(100);

    student1.printDetails();

    string fname;
    cout << "Enter student first name:";
    cin >> fname;

    string lname;
    cout << "Enter student last name:" ;
    cin >> lname;

    Student student2(fname, lname);
    int amount;
    cout << "How much grades will be entered?:";
    cin >> amount;


    for (int i = 0; i < amount; i++) {
        double grade;
        cout << "Enter grade:";
        cin >> grade;
        student2.addgrade(grade);
    }

    cout << endl;
    cout << "Student Information: " << endl;
    student2.printDetails();

    return 0;
}
