#include <iostream>
using namespace std;

int main() {
    int a[2][2], b[2][2], c[2][2];
    cout << "Enter 1st matrix (2x2):\n";
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++) 
        cin >> a[i][j];

    cout << "Enter 2nd matrix (2x2):\n";
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++) 
        cin >> b[i][j];

    cout << "Result:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            c[i][j] = a[i][j] + b[i][j];
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
