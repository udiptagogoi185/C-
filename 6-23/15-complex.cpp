#include <iostream>
using namespace std;

int main()
{
    int number = 5;
    int guess;
    int guessCount = 0;
    int guessLimit = 4;
    bool outofGuess = false;

    while(number != guess && !outofGuess)

        if(guessCount < guessLimit) 
        {
            cout << "Enter the number : ";
            cin >> guess;
            guessCount++;

        } else {
            outofGuess = true;
        }      
    if(outofGuess) {
        cout << "You loose!";
    } else {
        cout << "You win!";
    }
    return 0;

}