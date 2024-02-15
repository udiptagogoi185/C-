#include <iostream>

using namespace std;

int main ()
{
    int num1, num2;
    char op;

    cout << "enter the 1st number : ";
    cin >> num1;

    cout << "enter the operator : ";
    cin >> op;

    cout << "enter the 2ns number : ";
    cin >> num2;

    int result;

    if(op == '+') {
        result = num1 + num2;
    } 
        else if (op == '-') {
        result = num1 - num2;
    } 
        else if (op == '/') {
        result = num1 / num2;
    } 
        else if (op == '*') {
        result = num1 * num2;
    }
        else {
        cout << "invalid operator";
    }
    cout << "the answer is : " << result;


    return 0;
}
