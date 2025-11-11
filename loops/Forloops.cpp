
// Guess the Number


// Write a program that asks the user to guess a number between 1 and 10. The loop should continue until the user guesses correctly or enters 0 to quit.

// Your solution should use a while loop with a break statement to stop the loop based on the specification above.

// Extension Problem:

// Complete the exercise without using a break in the loop

#include <iostream>
using namespace std;



int main()
{
    int userNum;
    int counter = 6;

    cout << "Guess the number between 1 and 10" << endl;
    cout << "If you want to quit enter 0" << endl;
    
    while(true)
    {
        cin >> userNum;

        if((userNum < counter) || (userNum > counter) )//check if user input = the number
            {
                cout << "You entered a wrong number" << endl;
                continue;//stop current iteration and continue with the next
            }
        else if(userNum = 0)// if user types 0 stop the proggram
            {
                cout << "ending the proggram" << endl;
                break;
            }
        else
            {
                cout << "You guessed it" << endl;
                break;
            }
    }
    

}