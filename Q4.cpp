#include<iostream>
using namespace std;

int add(int a,int b){
return a+b;    }

int main()
{
    int num1,num2,result;
    cout<<"Enter the 1st no.: ";
    cin>>num1;
    cout<<"Enter the 2st no.: ";
    cin>>num2;

    result=add(num1,num2);
    cout<<num1 << " + " << num2 << " = " << result << endl;
    return 0;
}