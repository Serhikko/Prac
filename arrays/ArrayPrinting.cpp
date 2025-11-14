
// Array Printing

// Icon to indicate task activity

// Consider the following list of vehicles:
// "Car", "Train", "Tractor", "Skiff", "Tank"

// Declare and initialise an array called vehicles using these values then complete the following tasks:

//     Print index 3 to console
//     Print index 0 to console
//     Print Tractor Tank to console using array indexes
//     Print Car Skiff Train to console using array indexes
//     Print the entire array using a 'traditional' for loop
//     Print the entire array using a range based for loop

#include <iostream>
#include <string>
using namespace std;

int main()
{
cout << "Enter a wehicle type 0=Car, 1=Train, 2=Tractor, 3=Skiff, 4=Tank";

cin >> vehicles;

string vehicles[] = { "Car", "Train", "Tractor", "Skiff", "Tank"};

for (string name : vehicles) 
    {
    cout << name << " ";
    }

    return 0;
}