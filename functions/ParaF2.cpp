// Hello my name is Jake, I am 34 years old and like Avril Lavigne



#include <iostream>
#include <string>
using namespace std;

void bioFunc(string fname, int age, string fplace) 
{
  cout << "Hello my name is " << fname << " I am " << age << " years old and i like " << fplace ;
}

int main() 
{
  bioFunc("Jake", 34 , "Arvil Lavigne");
  return 0;
}