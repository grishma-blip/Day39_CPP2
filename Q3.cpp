#include<iostream>
#include<string>
using namespace std;
class Student
{
    int age;
    string name;

    public:
    Student(string studName, int studAge){
        name=studName;
        age=studAge;
    }
    Student(const Student &other){
        name = other.name;
        age = other.age;
    }
    void display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Student stud1("Meet", 20);
    Student stud2=stud1;

    cout << "Details of student1:" << endl;
    stud1.display();

    cout << "\nDetails of student2:" << endl;
    stud2.display();

    return 0;
}