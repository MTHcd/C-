#include <iostream>
using namespace std;

int main() {
    // Printing a message to test the compiler
    cout << "Hello, World! Your C++ compiler is working!" << endl;
    
    // Simple addition to test arithmetic operations
    int a = 5, b = 10;
    int sum = a + b;
    cout << "The sum of " << a << " and " << b << " is " << sum << endl;

    // Simple conditional test
    if (sum > 10) {
        cout << "The sum is greater than 10." << endl;
    } else {
        cout << "The sum is not greater than 10." << endl;
    }

    return 0;
}
