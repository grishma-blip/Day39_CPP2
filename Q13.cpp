#include<iostream>
using namespace std;

void swapNumbers(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void LargestNum(int* a, int* b){
    if(*a>*b){
        cout<<"Largest No.: "<<*a<<endl<<"Smallest No.: "<<*b<<endl;
    }
    else{
        cout<<"Largest No.: "<<*b<<endl<<"Smallest No.: "<<*a<<endl;
    }
}

int SumPointer(int *arr){
    int sum=0;
    for(int *ptr=arr;ptr<arr+5;ptr++){
        sum+=*ptr;
    }
    return sum;
}

int main()
{
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    cout << "\nBefore swapping: " << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;
    swapNumbers(&num1, &num2);

    cout << "\nAfter swapping: " << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl<<endl;
    LargestNum(&num1, &num2);

    int arr[5];
    cout<<"\nEnter 5 elements for the array :";
    for(int i=0;i<5;i++)
        cin>>arr[i];
    int sum=SumPointer(arr);
    cout << "\nThe sum of all array elements is: " << sum << endl;
    return 0;
}