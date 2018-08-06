// Guess "Your" Number
// The classic number guessing game, reloaded

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    int theNumber ;
    int tries = 0, guess= rand() % 100 + 1;
    int low = 1, high = 100;

    cout << "\tWelcome to Guess Your Number,\n";
    cout << "\ta Psuedo-Binary Search\n\n";

    do {
        cout << "Enter number (1..100): ";
        cin >> theNumber;
    } while (theNumber<1 && theNumber>100);

    cout << "My first guess is " << guess;
    ++ tries;
    if (guess > theNumber) {
        cout << ": Too high!\n\n";
        high = guess;
    }

    if (guess < theNumber) {
        cout << ": Too low!\n\n";
        low = guess;
    }

    while (guess != theNumber)
    {
        guess = (low+high)/2;
        cout << "I now guess " << guess;
        ++ tries;

        if (guess > theNumber) {
            cout << ": Too high!\n\n";
            high = guess-1;
        }

        if (guess < theNumber) {
            cout << ": Too low!\n\n";
            low = guess+1;
        }
    }

    cout << "\nThat's it! I got it in " << tries << " guesses!\n";
}
