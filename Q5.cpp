#include<iostream>
using namespace std;
int max(int a,int b){
    if(a>b)
        return a;
    else
        return b;
}
double max(double a,double b){
    if(a>b)
        return a;
    else
        return b;
}
float max(float a,float b){
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
    int int1,int2;
    double double1,double2;
    float float1,float2;

    cout << "Enter two integers: ";
    cin >> int1 >> int2;
    cout << "Larger of the two integers: " << max(int1, int2) << endl;

    cout << "Enter two double values: ";
    cin >> double1 >>double2;
    cout << "Larger of the two double: " << max(double1, double2) << endl;
    
    cout << "Enter two float values: ";
    cin >> float1 >> float2;
    cout << "Larger of the two floats: " << max(float1, float2) << endl;

    return 0;
}