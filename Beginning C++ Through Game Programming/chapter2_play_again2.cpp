// Play Again 2.0
// Demonstrates while loops

#include <iostream>
using namespace std;

int main()
{
    char again;
    do
    {
        cout << "\n**Wow, what an unimaginably exciting game, huh?**";
        cout << "\nDo you want to play again (y/n): ";
        cin >> again;
    } while (again == 'y');

    cout << "\nOkay, bye." << std::endl;

    return 0;
}