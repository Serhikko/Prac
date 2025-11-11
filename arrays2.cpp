// Add a for loop to your months of the year program that allows you to iterate through and output each of the values stored in the array.


#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string months[12] = 
    {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    for (int i = 0; i < 12; i++)
    {
        cout << months[i] << endl;
    }

    return 0;
}
