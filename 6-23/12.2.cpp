#include <iostream>
// #include <cmath>
using namespace std;

int main()
{
    bool isman = true;
    bool istall = false;

    if(isman && istall) {

        cout << "most of the man in the world is tall";
    }
    else if (isman && !istall) {

        cout << "most of the man in the world is short";
    } 
    else if (!isman && istall) {

        cout << "most of the girl in the world is tall";
    }
    else {

        cout << "most of the girl in the world is short";
    }
    
    return 0;
}