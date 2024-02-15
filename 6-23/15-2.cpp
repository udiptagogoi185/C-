#include <iostream>
using namespace std;

int main()
{
    int number = 5;
    int guess;

    do{
        cout << "enter the number : ";
        cin >> guess;
    } while(number !=guess);

    cout << "you win!";

    return 0;
}