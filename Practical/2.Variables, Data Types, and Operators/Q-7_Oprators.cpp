#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 3;

    cout << "Arithmetic: " << (a + b) << ", " << (a - b) << ", " << (a * b) << ", " << (a / b) << endl;
    cout << "Relational: " << (a > b) << ", " << (a == b) << endl;
    cout << "Logical: " << ((a > 0) && (b > 0)) << endl;
    cout << "Bitwise: " << (a & b) << ", " << (a | b) << endl;
    return 0;
}
