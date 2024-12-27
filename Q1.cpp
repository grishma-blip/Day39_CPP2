#include<iostream>
using namespace std;
class Calc
{
    public:
    int n,sum,mult;
    Calc(){
        sum=0;
        mult=1;
    }
    void Math(){
    cout<<"Enter a number: ";
    cin>>n;

    for(int i=0;i<=n;i++){
        if(i%2==0){
            sum=sum+i;
        }
        else{
            mult=mult*i;
        }
    }
}
};
int main()
{
   
    Calc obj;
    obj.Math();
    cout<<"Sum of all even numbers between 1 to "<<obj.n<<" is: "<<obj.sum<<endl;
    cout<<"Sum of all odd numbers between 1 to "<<obj.n<<" is: "<<obj.mult;
    return 0;
}