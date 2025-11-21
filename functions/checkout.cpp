#include <iostream>
#include <string>
using namespace std;


double checkout(double cost, double money)// define function
{ 
    double change = money - cost; // calculate change
    return change; // return change back to main program
}

int main()
{
    double myMoney = 40.00; // users money
    double shoes = 25.99; // cost of shoes
    
    myMoney = checkout(shoes, myMoney); // assign result of function to myMoney
    
    cout << "You have " << myMoney << " remaining" << endl; // output remaining funds
}