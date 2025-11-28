// <!-- 
// Calculator Refactor

// Icon to indicate task activity

// Using the starter code on Ultra work in small groups (or individually) to refactor the code into functions.

// As a minimum your program should have a function for each of the calculations, but can you spot any other opportunities?

// Finished? Work on chapter exercises and/or assessment coding challenges -->



#include <iostream>
using namespace std;
//global variables for calculations

 int num1, num2, total, choice;
 
//declare functions here



void calulations()
{
 
switch (choice) 
{
  case 1:
    total = num1 + num2;
    break;
  case 2:
    total = num1 - num2;
    break;
  case 3:
    total = num1 / num2;
    break;
  case 4:
    total = num1 * num2;
    break;
}

    cout << "Result" << endl;
    cout << "---------------------" << endl;
    cout << total << endl;
}


void menu()
{
    cout << "Welcome to the calculator" << endl;
    cout << "---------------------" << endl;
    
    
    cout << "Please enter a number" << endl;
    cout << "---------------------" << endl;
    
    cin >> num1;
    
    cout << "Please enter a number" << endl;
    cout << "---------------------" << endl;
    cin >> num2;
    
    cout << "What calculation do you want to perform" << endl;
    cout << "1: Addition \n2: Subtraction\n3: Division\n4: Multiplication" << endl;
    cin >> choice;
}



int main() 
{
    menu();
    calulations();


    return 0;
}
 
 





