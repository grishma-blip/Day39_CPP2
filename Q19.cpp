#include<iostream>
#include<string>
using namespace std;

class OnlinePurchase{
    string cardNumber;
    double balance;

    public:
    OnlinePurchase(string cardNum, double initialBalance=114739) : cardNumber(cardNum), balance(initialBalance) {}

    void validateCardNumber() {
        if (cardNumber.length() != 16) {
            throw "Credit card number should be 16-digits.";
        }
    }

    void purchase(double amount) {
        if (amount > balance) {
            throw "Insufficient balance.";
        }
        balance -= amount;
        cout << "Purchase successful! Remaining balance: Rs. " << balance << endl;
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    string cardNumber1,cardNumber2;
    double  amount;

    try{
        cout << "Enter your 16-digit debit card number: ";
        cin >> cardNumber1;
        OnlinePurchase purchase(cardNumber1);
        purchase.validateCardNumber();
        cout << "Confirm your 16-digit debit card number: ";
        cin >> cardNumber2;

        if(cardNumber1!=cardNumber2)
            throw "Card number does not match";

        cout << "Enter the purchase amount: Rs. ";
        cin >> amount;

        purchase.purchase(amount);
    }
    catch (const char* errorMsg) {
        cout << "Error: " << errorMsg << endl;
    }
    return 0;
}