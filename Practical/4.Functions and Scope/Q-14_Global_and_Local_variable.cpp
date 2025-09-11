#include <iostream>
using namespace std;

int x = 10;  // global

int main() {
    int x = 20; // local
    cout << "Local x = " << x << endl;
    cout << "Global x = " << ::x << endl;
    return 0;
}
