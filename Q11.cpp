#include<iostream>
using namespace std;
int main()
{
    int arr[8];
    int even=0,odd=0;
    for(int i=0;i<8;i++){
        cout<<"Input elements of the array : ";
        cin>>arr[i];
    }
    for(int i=0;i<8;i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<"In the array, the NO. of even elements are "<<even<<" and No. of odd elements are "<<odd<<endl;
    return 0;
}