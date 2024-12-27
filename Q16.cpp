#include<iostream>
#include<string>
using namespace std;

class BankAcc{
    double balance;
    string AccountHolder;
    string AccountNumber;

    public:
    BankAcc(string Accname,string AccNumber,double bal){
    balance=bal;
    AccountHolder=Accname;
    AccountNumber=AccNumber;    
    }

    void BankDetails(){
        cout<<"Account Holder: "<<AccountHolder<<endl;
        cout<<"Account Number: "<<AccountNumber<<endl;
        cout<<"Balance Rs.: "<<balance<<endl;
    }

    void Withdraw(double amt){
        try{
            if(amt>0 && amt<=balance){
                balance -= amt;
                cout<<"Withdrawn Rs."<<amt<<" successfully"<<endl;
                cout<<"New Balance: Rs."<<balance;
            }
            else if(amt>balance){
                throw "Insufficient Balance: ";
            }
            else{
                throw "Invalid Withdrawal Amount";
            }
        }
        catch(const char* err){
        cout<<"Error: "<<err<<endl;
        }    
    }
    double checkBalance() {
        return balance;
    }
};

int main()
{
    double amt;
    BankAcc cust1("Meet Alshi","123456789",114727.91);
    int choice;
    do
    {
        cout << "\n=== Welcome to Bank ===" << endl;
        cout << "1. Account Details" << endl;
        cout << "2. Check Balance" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;
        cout << "Choose an option (1-4): ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cust1.BankDetails();
            break;
        case 2:
            cout<<"Balance: Rs."<<cust1.checkBalance()<<endl;
            break;
        case 3:
            cout<<"Enter amount to withdraw: ";
            cin>>amt;
            cust1.Withdraw(amt);
            break;
        case 4:
            cout << "Thank you for coming Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice! Please choose a valid option." << endl;
        }
    }while (choice != 4);
    return 0;
}