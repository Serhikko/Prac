#include <iostream>
using namespace std;


int main()
{
// Write a program that declares and initialises the variable myNum to the value 20.
bool userNum;
int theNum = 20;

cout << "Enter a number 20" << endl;//request input
cin >> userNum;//get input


while(userNum = theNum)
 {
    cout << userNum << endl;
    myNum -= 0.5;
 
    while (cin.fail()) //VALIDATION IF A NUMBER   need to make it like (while theNum != userNum) Invalid input
    {//Check if user enters valid input
        cout << "Invalid input" << endl;//output error messages
        cin.clear(); //clear bad input flag
        cin.ignore(1000 , '\n'); //ignore input (i need to ignore from 1 to 19 and from 21 to inf)
        cin >> userNum; //get number again

        while (theNum != userNum)
        {
            cout << "Invalid number" << endl;//output error message 
            cin >> userNum; //get number again
        }
    }

}


 
 
   

//bool getnum = true
  //while getnum
    //while (cinfail)

    //mynum val
    //if good then getNum = false


//myNum <=19 && myNum >=21

//cout << "Your number: " << myNum << endl;


// Now using a while loop decrease the value of myNum by 0.5 and continue to output its value as long as it remains positive (e.g. above zero)
   
    // while (myNum == 20) // mynum > 0
    // {
    //     cout << myNum << endl;
    //     myNum -= 0.5;
    // }

    return 0;
}