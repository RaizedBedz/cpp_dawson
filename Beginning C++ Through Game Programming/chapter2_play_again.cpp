// Play Again
// Demonstrates while loops

#include <iostream>
using namespace std;

int main()
{
    char again = 'y';
    while (again == 'y')
    {
        cout << "\n**Wow, what an unimaginably exciting game, huh?**";
        cout << "\nDo you want to play again (y/n): ";
        cin >> again;
    }
    cout << "\nOkay, bye." << std::endl;

    return 0;
}