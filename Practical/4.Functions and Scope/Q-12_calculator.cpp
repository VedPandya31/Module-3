#include <iostream>
using namespace std;

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
float divide(int a, int b) { return (float)a / b; }

int main() {
    int a, b;
    cout << "Enter first numbers: ";
    cin >> a;
    cout << "Enter  numbers: ";
    cin >> b;
    cout << "Add: " << add(a, b) << endl;
    cout << "Subtract: " << sub(a, b) << endl;
    cout << "Multiply: " << mul(a, b) << endl;
    cout << "Divide: " << divide(a, b) << endl;
    return 0;
}
