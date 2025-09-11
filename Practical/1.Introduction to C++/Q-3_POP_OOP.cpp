// POP
// #include <iostream>
// using namespace std;

// int main() {
//     int length, width;
//     cout << "Enter length: ";
//     cin >> length;
//     cout <<"Enter width:";
//     cin>>width;
//     cout << "Area = " << length * width << endl;
//     return 0;
// }

// OOP
#include <iostream>
using namespace std;

class Rectangle {
    int length, width;
public:
    void input() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width:";
        cin >> width;
    }
    int area() {
        return length * width;
    }
};

int main() {
    Rectangle r;
    r.input();
    cout << "Area= " << r.area() << endl;
    return 0;
}
