// Score Rater
// Demonstrates the if statement

#include<iostream>

using namespace std;
int main()
{
    if (true)
        cout << "This is always displayed.\n\n";

    if (false)
        cout << "This is never displayed.\n\n";

    int score = 1000;

    if (score)
        cout << "Okay, you have some skill.\n\n";

    if (score >  500)
        cout << "Over 500, nice.\n\n";

    if (score == 1000) {
        cout << "You scored a perfect 1000!\n\n";
        cout << "Now that's impressive.\n";
    }

    if (score > 500) {
        cout << "You scored at least 500.\n";
        if (score >= 1000)
            cout << "You scored at 1000 or more!\n";
    }

    return 0;
}