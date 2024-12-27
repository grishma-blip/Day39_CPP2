#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string personName, int personAge) : name(personName), age(personAge) {}

    void displayPersonDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
private:
    int rollNumber;
    string course;
public:
    Student(string studentName, int studentAge, int studentRoll, string studentCourse)
        : Person(studentName, studentAge), rollNumber(studentRoll), course(studentCourse) {}

    void displayStudentDetails() {
        displayPersonDetails(); 
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Course: " << course << endl;
    }
};

class Faculty : public Person {
private:
    int employeeID;
    string department;
public:
    Faculty(string facultyName, int facultyAge, int facultyID, string facultyDepartment)
        : Person(facultyName, facultyAge), employeeID(facultyID), department(facultyDepartment) {}

    void displayFacultyDetails() {
        displayPersonDetails(); 
        cout << "Employee ID: " << employeeID << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    Student student("Meet Alshi", 18, 123, "C++");
    Faculty faculty("Anushree Goud", 26, 6789, "C++");

    cout << "\nStudent Details:" << endl;
    student.displayStudentDetails();

    cout << "\nFaculty Details:" << endl;
    faculty.displayFacultyDetails();

    return 0;
}