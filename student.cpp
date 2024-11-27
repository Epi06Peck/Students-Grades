#include "student.h"

Student::Student(string fname, string lname) {
    firstName = fname;
    lastName = lname;
}

void Student::addgrade(double grade) {
    grades.push_back(grade);
}

double Student::calculateAverage() {
    if (grades.empty()) {
        return 0.0;
    }

    double sum = 0.0;
    for (double grade : grades) {
        sum = sum + grade;
    }

    return sum / grades.size();
}

void Student::printDetails() {
    cout << "Student Name: " << firstName << " " << lastName << endl;
    double average = calculateAverage();
    cout << "Average of Grades: " << fixed << setprecision(2) << average << endl;
}