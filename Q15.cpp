#include<iostream>
using namespace std;
class Rectangle{
    double length,breadth;
    public:
    Rectangle(double len,double width){
        length=len;
        breadth=width;
    }
    double Area(){
        double area= length*breadth;
        cout<<"Area of rectangle having length "<<length<<" and breadth "<<breadth<<" is "<<area<<endl;
        return 0;
    }
};
int main()
{
    double length,breadth;

    cout<<"Enter the length of the rectangle: ";
    cin>>length;
    cout<<"Enter the breadth of the rectangle: ";
    cin>>breadth;

    Rectangle rect(length,breadth);
    rect.Area();
    return 0;
}