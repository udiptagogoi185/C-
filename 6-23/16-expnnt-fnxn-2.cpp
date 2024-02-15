#include <iostream>
using namespace std;

int main() {
    int A, B;
    int result = 1;

    cout << "Enter the value of A: ";
    cin >> A;

    cout << "Enter the value of B: ";
    cin >> B;

    for (int i = 0; i < B; i++) {
        result = result * A;
    }

    cout << "Result: " << result << endl;

    return 0;
}
