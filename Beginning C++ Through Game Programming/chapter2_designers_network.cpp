// Designers Network
// Demonstrates logical operators

#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "\tGame Designer's Network\n";
    int security = 0;

    string username;
    cout << "\nUsername: ";
    cin >> username;

    string password;
    cout << "Password: ";
    cin >> password;

    if (username == "marcus" && password == "civilization" )
    {
        cout << "\nHey, Marcus.";
        security = 5;
    }
    if (username == "martin" && password == "dream" )
    {
        cout << "\nHey, Martin.";
        security = 10;
    }
    if (username == "malcolm" && password == "necessary" )
    {
        cout << "\nHey, Malcolm.";
        security = 15;
    }
    if (username=="guest" || password == "guest") {
        cout << "\nWelcome, guest.";
        security = 1;
    }
    if (!security)
        cout << "\nYour login failed.\n";

    return 0;
}
