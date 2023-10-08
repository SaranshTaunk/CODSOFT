#include <iostream>
#include <ctime>
#include <time.h>
using namespace std;
int main()
{
    srand(time(0));
    int number = rand() % 1000 + 1;
    int guess, nguesses = 1;
    cout << "Guess The Number Between 1 and 1000!" << endl;
    do
    {
        cin >> guess;
        if (guess > number)
        {
            cout << "Number is Too High, Lower Number Please!" << endl;
        }
        else if (guess < number)
        {
            cout << "Number is Too Low, Higher Number Please!" << endl;
            ;
        }
        else
        {
            cout << "Congratulations, U Guessed it Right!" << endl;
            cout << "U Guessed the Answer in exactly " << nguesses << " turns" << endl;
        }
        nguesses++;
    } while (guess != number);

    return 0;
}
