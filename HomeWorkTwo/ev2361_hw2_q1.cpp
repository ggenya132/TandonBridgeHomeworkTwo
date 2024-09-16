#include <iostream>
#include <string>
using namespace std;


int prompt(string denomination){
    int numberOfCurrentDenomination;
    cout<< "# of "<<denomination<<":";
    cin>>numberOfCurrentDenomination;
    return numberOfCurrentDenomination;
};
int main(){
 
    int numberOfQuarters, numberOfDimes, numberOfPennies, numberOfNickles;

    cout<<"Please enter the number of coins:\n";

    numberOfQuarters = prompt("quarters");
    numberOfDimes = prompt("dimes");
    numberOfNickles = prompt("nickles");
    numberOfPennies = prompt("pennies");

    int totalCents = (numberOfQuarters * 25) + (numberOfDimes * 10) + (numberOfNickles * 5) + (numberOfPennies * 1);
    int centsInDollars = 100;
    // Could probably just truncate floating point or set cout to use percision of two, but whatever, this is fine.
    int totalDollars = totalCents/centsInDollars;
    int centsLeftOver = totalCents % 100;

    cout<<"The total is "<<totalDollars<<" dollars and "<<centsLeftOver<<" cents\n";
    return 0;
};
