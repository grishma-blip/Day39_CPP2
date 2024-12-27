#include<iostream>
using namespace std;
int add()
{
    int a,b,sum;
    cout<<"Enter a number ";
    cin>>a;
    cout<<"Enter another number ";
    cin>>b;

    sum=a+b;
    cout<<a<<" + "<<b<<" = "<<sum<< endl;
    return 0;
}
int sub()
{
    int a,b,sub;
    cout<<"Enter a number ";
    cin>>a;
    cout<<"Enter another number ";
    cin>>b;

    sub=a-b;
    cout<<a<<" - "<<b<<" = "<<sub<< endl;
    return 0;
}
int mult()
{
    int a,b,mult;
    cout<<"Enter a number ";
    cin>>a;
    cout<<"Enter another number ";
    cin>>b;

    mult=a*b;
    cout<<a<<" * "<<b<<" = "<<mult<< endl;
    return 0;
}
int div ()
{
    int a,b,div;
    cout<<"Enter a number ";
    cin>>a;
    cout<<"Enter another number ";
    cin>>b;
    try{
        if (b == 0)
            throw "Error: Division by zero is not allowed." ;
        else
        {
            div=a/b;
            cout<<a<<" / "<<b<<" = "<<div<< endl;
        }
        return 0;
    }
    catch(const char *error){
        cout<<error<<endl;
    }
    return 0;
}
int main()
{
    int choice;
    do
    {
        cout << "\n=== Calculator Menu ===" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << endl;
        cout << "Choose an option (1-5): ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            add();
            break;
        case 2:
            sub();
            break;
        case 3:
            mult();
            break;
        case 4:
            div();
            break;
        case 5:
            cout << "Exiting the calculator. Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice! Please choose a valid option." << endl;
        }
    } while (choice != 5);

    return 0;
}