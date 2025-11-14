#include <iostream>
#include <string>
using namespace std;

int main()
{

string staff[] = { "Lee", "Sam", "John", "Ron", "Jake", "Coral", "Gary" };

for (string name : staff) 
    {
    cout << name << " ";
    }

    return 0;
}