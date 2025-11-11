// Write a program that asks the user to enter the names of class attendees.
//  The program should allow the user to enter at least five names.
//   Once entered the names should be output by the program in a nicely formatted list

// 1. Joe Bloggs
// 2. Jill Smith
// 3. Fred Lowry
// 4. Alan Johns
// 5. Mary Lown

#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int numAttendees = 5;
    string names[numAttendees];

    cout << "Enter the names of " << numAttendees << " class attendees (one word each):\n";

    for (int i = 0; i < numAttendees; i++)
    {
        cout << (i + 1) << ". ";
        cin >> names[i];
    }

    cout << "\nList of class attendees:\n";
    for (int i = 0; i < numAttendees; i++)
    {
        cout << (i + 1) << ". " << names[i] << endl;
    }

    return 0;
}
