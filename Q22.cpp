#include <iostream>
using namespace std;
int main() {
    double percentage;
    char grade;
    cout << "Enter the percentage of the student: ";
    cin >> percentage;

    if (percentage >= 90) {
        grade = 'A';
    } else if (percentage >= 75) {
        grade = 'B';
    } else if (percentage >= 50) {
        grade = 'C';
    } else {
        grade = 'F';
    }
    cout << "The student's grade is: " << grade << endl;
    return 0;
}