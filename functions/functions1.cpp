#include <iostream>
#include <string>
using namespace std;


// You say hello, I say goodbye

// Icon to indicate task activity

// Write a program that contains and invokes two functions.

// One named hello that outputs a welcome message which reads "Welcome to my program"
// One named goodbye that outputs a goodbye message which reads "End of program".


// function 
void hello()
{
    cout << "Welcome to my program" << endl; 
}

void goodBye()
{
    cout << "End of program" << endl;
}

int main()
{
    // invoke function (e.g. make it run)
    hello(); 
    goodBye();
    

    return 0;
}