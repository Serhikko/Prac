// Write a program that asks the user to enter two numbers.

// These numbers should then be passed to a function that multiplies them and the returns the result.

// The returned value should then be output to the console from the main program

// Finished? Validate the users input via a function


#include <iostream>
#include <string>
using namespace std;

int calculation(int userInput1, int userInput2)
{
    return userInput1 * userInput2;
}



int main()
{
    int userInput1;
    int userInput2;
    cout << "Please enter a first number you wwant to multiply" << endl;
    cin >> userInput1;
    cout << "Please enter a second number you wwant to multiply" << endl; 
    cin >> userInput2;


    cout << "the reuslt is = " << calculation(userInput1,userInput2);
    return 0;
}