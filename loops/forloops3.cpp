// Implement a for loop that counts down from 10 to 0, however when you reach 0 instead of outputting the number output the following message:

// We have lift off!

#include <iostream>
using namespace std;

int main() 
{
    for(int i = 10; i >= 0; i--) 
    {
        if (i == 0) 
        {
            cout << "We have lift off!" << endl;
        } 
        else 
        {
            cout << "i is: " << i << endl;
        }
    }
    return 0;
}
