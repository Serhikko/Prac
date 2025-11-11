#include <iostream> 
using namespace std; 

//Write a program that tells the user whether ro not they are eligible to vote.The program should do the following:
// Declare and initialise the variables to store age
// Use IF-Else statement to compare this value to the UK voting age,which is 18
// The programmme should print a responce to the user for each possible outcome

//variables = age,

int main(){
int age;

cout << "Enter your age" << endl;
cin >> age;

if (age == 18 || age > 18){
 cout << "You are eligible to vote";
}
else 
{
cout << "You are not eligible to vote";
}
return 0;
}