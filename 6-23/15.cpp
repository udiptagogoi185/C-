#include <iostream>
using namespace std;

int main()
{
    int number = 7;
    int guess;

    while (number != guess) {
        cout << "enter the guess : ";
        cin >> guess;
    }
    cout << "you win!";

    return 0;
}