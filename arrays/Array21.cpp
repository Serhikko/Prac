#include <iostream>
#include <string>
using namespace std;

int main()
{
    // objavyt odnovymernyj masyv i probigtys' po nyomu
    int arr[] = {22, 2, 42, 11, 54, 22, 2, 42, 11, 54};
    int summ = 0;
    for (int i = 0; i < 5; i++)
    {
        summ = arr[i] + summ;
    }
    cout << summ << " ";
}

