#include <iostream> 
using namespace std; 

int main() 
{ 
    double distance, carconsumpt, calculation,priceperlitre,totalcost;

    cout << "Enter distance you need to tavel (in km): ";
    cin >> distance;

    cout << "Enter petrol price per litre (in GBP): ";
    cin >> priceperlitre;

    cout << "Enter your car gas consumption (liters/100km): ";
    cin >> carconsumpt;

    

    calculation = (distance / carconsumpt) ;
    cout << "Your car's fuel consumption is " << calculation << endl;

    totalcost = calculation * priceperlitre;
    cout << "Your total fuel cost is " << totalcost << " GBP" << endl;

    return 0; 
}
