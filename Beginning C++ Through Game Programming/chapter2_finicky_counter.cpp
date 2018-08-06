// Finicky Counter
// Demonstrates break and continue statements

#include <iostream>

using namespace std;

int main()
{
    int count = 0;
    while (true)
    {
        count += 1;

        // end if count is > 10
        if (count > 10)
            break;

        if (count == 5)
            continue;

        cout << count << std:: endl;
    }
    return 0;
}