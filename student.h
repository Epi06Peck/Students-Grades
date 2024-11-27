#include <vector>
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

class Student{
    public:
        Student(string fname, string lname);
        void addgrade(double grade);
        double calculateAverage();
        void printDetails();


    private:
        string firstName;
        string lastName;
        vector<double> grades;
};