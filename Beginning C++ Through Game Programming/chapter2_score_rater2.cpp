// Score Rater 2.0
// Demonstrates the else clause

#include<iostream>

using namespace std;
int main()
{
    int score;
    cout << "Enter your score: ";
    cin >> score;

    if(score > 500)
        cout << "Over 500, nice.\n\n";
    else
        cout << "\nYour got 500 or less. Nothing to brag about.\n";

    return 0;
}