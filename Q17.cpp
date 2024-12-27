#include <iostream>
#include <string>
using namespace std;

class Book {
    int bookid;
    string bookname;
    string author;

public:
    Book() {
        bookid = 0;
    }

    void setBookDetails(int BookId, string BookName, string Author) {
        bookid = BookId;
        bookname = BookName;
        author = Author;
    }

    void displayBook() {
        if (bookid != 0) {
            cout << "Book ID: " << bookid << endl;
            cout << "Book Name: " << bookname << endl;
            cout << "Author: " << author << endl;
            cout << "---------------------------" << endl;
        }
    }
};

class Library {
    Book books[100]; 
    int bookCount;   
public:
    Library() {
        bookCount = 0;
    }

    void addBook(int bookid, string name, string writer) {
        if (bookCount < 100) { 
            books[bookCount].setBookDetails(bookid, name, writer);
            bookCount++;
            cout << "Book added successfully!" << endl;
        } else {
            cout << "Library is full! Cannot add more books." << endl;
        }
    }

    void displayBooks() {
        if (bookCount == 0) {
            cout << "No books in the library!" << endl;
            return;
        }
        cout << "Displaying all books in the library:" << endl;
        for (int i = 0; i < bookCount; i++) {
            books[i].displayBook();
        }
    }
};

int main() {
    Library lib;
    int choice;

    do {
        cout << "\n=== Library Management System ===" << endl;
        cout << "1. Add a Book" << endl;
        cout << "2. Display All Books" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            int id;
            string name, writer;
            cout << "Enter Book ID: ";
            cin >> id;
            cin.ignore(); 
            cout << "Enter Book Name: ";
            getline(cin, name);
            cout << "Enter Author Name: ";
            getline(cin, writer);
            lib.addBook(id, name, writer);
            break;
        }
        case 2:
            lib.displayBooks();
            break;
        case 3:
            cout << "Exiting the system. Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 3);

    return 0;
}