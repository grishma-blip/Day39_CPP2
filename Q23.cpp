#include <iostream>
using namespace std;

class Max {
private:
    int num1, num2, num3;

public:
    Max(int a, int b, int c) {
        num1 = a;
        num2 = b;
        num3 = c;
    }

    int findMax() {
        if (num1 >= num2 && num1 >= num3) {
            return num1;
        } else if (num2 >= num1 && num2 >= num3) {
            return num2;
        } else {
            return num3;
        }
    }
};

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    Max maxObj(a, b, c);
    cout << "The greatest number is: " << maxObj.findMax() << endl;

    return 0;
}