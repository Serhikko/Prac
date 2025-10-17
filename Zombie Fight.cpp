#include <iostream>
using namespace std;

int main()
{
    //store fight information
    bool zombieAtDoor ;
    bool decideToFight ;


    cout << "Are the zombies at door put 1 or 0(true = 1 or false= 0)" <<endl;
    cin >> zombieAtDoor;

    if (zombieAtDoor == false)
        {//else block for no zombies
            cout <<"Let the civilian in" << endl;
        }
        else 
        {
            cout <<"block the door" << endl;
        }
        
    cout << "Do you want to fight ,put 1 or 0(true = 1 or false= 0)" <<endl;
    cin >> decideToFight;


    //THis is the nested if-else statement that groverns the decisions
    if (zombieAtDoor)
     {
        if (decideToFight == true)
        {
            cout << "Grab a weapon and fight for your life!" << endl;
        }
        else
        {
            cout <<"Run away,as fast as you can!" <<endl;
        }
        
    }
    return 0;
}