#include<iostream>
using namespace std;
int main() {
    char symbol;
    int number1, number2;
    cout << "Enter an operator for operation (+, -, *, /): ";
    cin >> symbol;
    cout << "Enter two numbers: " << endl;
    cin >> number1 >> number2;

    switch (symbol) {
        case '+':
            cout <<  " The addition is: " << number1 + number2;
            break;
        case '-':
            cout << " The subtraction is: " << number1 - number2;
            break;
        case '*':
            cout <<  " The multiplication is: " << number1 * number2;
            break;
        case '/':
            cout <<  " The division is: " << number1 / number2;
            break;
        default:
            cout << "The operator is not valid";
            break;
    }

    return 0;
}
