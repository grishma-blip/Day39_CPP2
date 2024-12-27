#include<iostream>
using namespace std;
int main()
{
    int arr[6];
    for(int i=0;i<6;i++){
        cout<<"Input elements of the array : ";
        cin>>arr[i];
    }
    int add = arr[0]; 

    for (int i = 1; i<6 ;i++) {
        add=add+arr[i];
    }
    cout << "The sum of all elements in the array is: " <<add<< endl;

    return 0;
}