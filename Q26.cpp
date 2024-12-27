#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream my_file("abc.txt"); 
    if (!my_file) {
        cout << "Error creating the file." << endl;
        return 1;
    }
    my_file << "Hi Btech students" << endl;
    my_file << "This is C++ session" << endl;
    my_file << "ALL THE BEST" << endl;
    my_file.close(); 
    cout << "File written successfully." << endl;

    ifstream my_file_read("abc.txt"); 
    if (!my_file_read) {
        cout << "Error opening the file for reading." << endl;
        return 1;
    }
    cout << "\nReading file content:" << endl;
    string line;
    while (getline(my_file_read, line)) {
        cout << line << endl;
    }
    my_file_read.close(); 

    ofstream my_file_append("abc.txt", ios::app);
    if (!my_file_append) {
        cout << "Error opening the file for appending." << endl;
        return 1;
    }
    my_file_append << "Line 4" << endl;
    my_file_append << "Line 5" << endl;
    my_file_append << "Line 6" << endl;

    my_file_append.close(); 
    cout << "New lines appended successfully." << endl;
    
    return 0;
}