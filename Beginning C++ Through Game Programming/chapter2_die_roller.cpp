// Die Roller
// Demonstrates generating random numbers

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int randomNumber = rand();

    int die = (randomNumber%6) + 1; // get a number 'tween 1 & 6
    cout << RAND_MAX << endl;
    cout << "You rolled a " << die << ", ";
    cout << "I'll now roll 100 K times ...\n";

    int randomArray[10];

    for(int i=0; i<10; ++i)
        randomArray[i] = 0;

    for(int i=0; i<100000; ++i)
        randomArray[ rand()%6+1 ]++;

    for(int i=0; i<10; ++i)
        if (randomArray[i])
            cout << "\t" << i << "\t" << randomArray[i] << endl;

    return 0;
}
