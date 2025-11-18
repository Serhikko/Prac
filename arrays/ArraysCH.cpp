#include <iostream>
#include <string>
using namespace std;


int main()
{
    int arr[5][2] = 
    { 
        {1, 2}, 
        {3, 4}, 
        {5, 6}, 
        {7, 8}, 
        {9, 10} 
    };

    cout << "arr: " << arr << '\n'; //F0CCAF0

    cout << "arr[0]: " << arr[0] << '\n'; //F0CCAF0

    cout << "arr[0][0]: " << arr[0][0] << endl; //1


    return 0;
}