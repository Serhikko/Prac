#include <iostream> 
using namespace std; 

int main() 
{ 
    double distance, carconsumpt, calculation,priceperlitre,totalcost;
    const double p = 1.33;//petrol price per litre
    const double d = 1.44;//diesel price per litre
    char fueltype;
    
    cout << "What fuel do you use? (p for petrol, d for diesel): ";
    
    cin >> fueltype;

    if (fueltype == 'p'){
        priceperlitre = p;
    }
    else if (fueltype == 'd'){
        priceperlitre = d;
    }

    cout << "Enter distance you need to tavel (in km): ";
    cin >> distance;

    //cout << "Enter petrol price per litre (in GBP): ";
    //cin >> priceperlitre;

    cout << "Enter your car gas consumption (liters/100km): ";
    cin >> carconsumpt;

    calculation = (distance / carconsumpt) ;
    cout << "Your car's fuel consumption is " << calculation << endl;

    totalcost = calculation * priceperlitre;
    cout << "Your total fuel cost is " << totalcost << " GBP" << endl;

    return 0; 
}
