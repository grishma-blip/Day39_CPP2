#include <iostream>
using namespace std;
class Base {
public:
    virtual void display() {
        cout << "Display function of Base class." << endl;
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "Display function of Derived class." << endl;
    }
};

int main() {
    Base* basePtr;

    Base baseObj;
    basePtr = &baseObj;
    cout << "Calling display() from Base object:" << endl;
    basePtr->display();

    Derived derivedObj;
    basePtr = &derivedObj; 
    cout << "Calling display() from Derived object:" << endl;
    basePtr->display();
    return 0;
}