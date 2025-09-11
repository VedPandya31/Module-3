#include <iostream>
using namespace std;

int main() {
    int x = 10;
    double y = x;  // implicit
    cout << "Implicit conversion int->double: " << y << endl;

    double z = 9.7;
    int k = (int)z;  // explicit
    cout << "Explicit conversion double->int: " << k << endl;
    return 0;
}
