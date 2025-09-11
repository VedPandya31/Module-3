#include <iostream>
using namespace std;

int main() {
    int n,i;
    cout << "Enter number of elements: ";
    cin >>n;
    int arr[n], sum = 0,num;
    for (int i = 0; i < n; i++) {
        cout<<"Enter Your Value:";
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "Sum = " << sum << ", Average = " << (float)sum / n << endl;
    return 0;
}
