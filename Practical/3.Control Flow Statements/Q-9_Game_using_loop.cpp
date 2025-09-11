#include <iostream>
using namespace std;

int main() {
    int secret, guess;

    cout << "Player 1, enter a secret number (1-100): ";
    cin >> secret;

    cout << "\nPlayer 2, try to guess the number!\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        if (guess > secret)
            cout << "Number is high!\n";
        else if (guess < secret)
            cout << "Number is low!\n";
    } while (guess != secret);

    cout << "Correct Number is" << secret << endl;
    return 0;
}







