#include <iostream>
using namespace std;

int power (int base, int pow) {
    int result = 1;
    
    for (int indx = 0; indx < pow; indx++) {
        result = result * base;
    }
        return result;
}

int main ()
{
    cout << power(4, 2);

    return 0;
}