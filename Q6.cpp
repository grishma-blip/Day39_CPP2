#include <iostream>
using namespace std;

int factorial(int n) {
    if (n < 0) {
        throw "Factorial is not defined for negative numbers.";
    }
    if (n == 0 || n == 1) {
        return 1; 
    }
    return n * factorial(n - 1); 
}

int main() {
    
    int n, result;

    cout << "Enter a number: ";
    cin >> n;

    try {
        result = factorial(n);
        cout << "Factorial of " << n << " is " << result << endl;
    } catch (const char* errMsg) {
        cout << "Error: " << errMsg << endl;
    }

    return 0;
}