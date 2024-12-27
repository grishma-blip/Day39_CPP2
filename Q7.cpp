#include<iostream>
using namespace std;
int main()
{
    int arr[4];
    for(int i=0;i<5;i++){
        cout<<"Input elements of the array : ";
        cin>>arr[i];
    }
    int max = arr[0]; 

    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i]; 
        }
    }
    cout << "The largest number in the array is: " << max << endl;

    return 0;
}