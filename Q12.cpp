#include<iostream>
#include<string>
using namespace std;

string ReverseString(string str1){
    string reverse;
    int n=str1.length();
    for(int i=n-1 ;i>=0 ;i--){
        reverse+=str1[i];
    }
    return reverse;
}

string ConcatenateString(string str1,string str2){
    string str3;
    str3= str1+str2;
    return str3;
}

int Length(string str){
    return str.length();

 }

int main()
{
    string str1,str2;
    cout<<"Enter a string to be reversed: ";
    getline(cin,str1);
    cout<<"Reversed String: "<<ReverseString(str1)<<endl;

    cout<<"\nEnter a first string to be Concatenate: ";
    getline(cin,str1);
    cout<<"Enter a second string to be Concatenate: ";
    getline(cin,str2);

    string concatenated=ConcatenateString(str1,str2);
    cout<<"Concatenated string: "<<concatenated<<endl;

    cout<<"\nThe length of Concatenated string is "<< Length(concatenated) <<endl;
}