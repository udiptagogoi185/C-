#include <iostream>
// #include <cmath>
using namespace std;

int number(int num1, int num2, int num3) {
    int result;

    if(num1 >= num2 && num1 >= num3) {
        result = num1;
    } else if(num2 >= num1 && num2 >= num3) {
        result = num2;
    } else {
        result = num3;
    }
    return result;

}
int main()
{
    int result = number(10, 20, 5);
    cout << "the bigger number is : " << result;

    return 0;
}