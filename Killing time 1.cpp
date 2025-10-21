
// make program with two scenarios 
// 1)friend is late for more than 15 minutes -if you have 3 or more pound in change go buy coffe else go for a walk 
// 2)Friend is going to be in less then in 15 minutes,sit in the park.

#include <iostream>
using namespace std;

int main()
{
    bool friendLate;
    double change;

    //friend is late?

    cout << "is your friend will be late for more then 15 minutes(1-yes 0-no)\n";
    cin >> friendLate;


    if (friendLate == true)
    {
        //if you have more than 3 pounds in chage go buy coffe othervise go around the city and walk
        cout << "How much change do you have?\n";
        cin >> change;
    
        if (change == 3 || change >3)
        {
            cout << "go buy coffe\n";
        }
        else
        { 
            cout << "go for a walk\n";
        }
    }
    else if (friendLate == false)
    {
            //friend less then 15 min sit in the park and cry
            cout << "sit in the park\n";
    }

}