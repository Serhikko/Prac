#include <iostream>
using namespace std;

int main(){
  
  cout << "Enter a number: " << endl;//request input
  int x;//variable to store input
  cin >> x;//get input

  while (cin.fail()) {//Check if user enters valid input
    cout << "Invalid input" << endl;//output error message
    cin.clear(); //clear bad input flag
    cin.ignore(1000, '\n'); //ignore input
    cin >> x; //get number again
  }
  
  cout << "Your number: " << x << endl;

  return 0;
}