#include <iostream>
using namespace std;

int main()
{
    int userNum;
    int counter = 6; // The number to guess

    cout << "Guess the number between 1 and 10" << endl;
    cout << "If you want to quit enter 0" << endl;

    

    while (true)
    {
        cin >> userNum;
        
        if (userNum == 0)
        {
            cout << "Ending the program" << endl;
            break;
        }
        else if (userNum == counter)
        {
            cout << "You guessed it!" << endl;
            break;
        }
        else
        {
            cout << "You entered a wrong number" << endl;
        }
    }

    return 0;
}
