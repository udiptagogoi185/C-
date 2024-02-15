#include <iostream>
using namespace std;

string yourDay(int number) {
    string day;

    switch(number) {
    case 1:
        day = "sunday";
        break;
    case 2:
        day = "monday";
        break;
    case 3:
        day = "tuesday";
        break;
    case 4:
        day = "wednesday";
        break;
    case 5:
        day = "friday";
        break;
    default:
        day = "the number is invalid";
    }
    return day;
}
int main ()
{
    cout << yourDay(2);
    return 0;
}