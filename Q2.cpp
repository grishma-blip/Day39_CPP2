#include<iostream>
using namespace std;
class Rectangle
{
    private:
    double length, width;

    public:
    Rectangle(){
        int len,wid;
        length=1;
        width=1;

        cout<<"Enter the length of rectangle: ";
        cin>>length;
        cout<<"Enter the breadth of rectangle: ";
        cin>>width;
    }
    double area(){
        return length*width;
    }
};

int main()
{
    Rectangle obj1;
    cout<<"The area of the rectangle is: "<<obj1.area()<<endl;
    return 0;
}