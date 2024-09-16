#include <iostream>
using namespace std;
int main(){

    double amountOfDollars;
    double amountOfCents;

    cout<<"Please enter your amount in the format of dollars and cents separated by a space:\n";
    cin>>amountOfDollars>>amountOfCents;

    double totalAmountOfCents = (amountOfDollars*100)+amountOfCents;
    cout<<totalAmountOfCents<<endl;
    int numberOfQuarters = (int) totalAmountOfCents / 25; 
    int numberOfDimes = ((int)totalAmountOfCents - (numberOfQuarters*25)) / 10;
    int numberOfNickles = ((int)totalAmountOfCents - (numberOfQuarters*25) - (numberOfDimes*10)) / 5;
    int numberOfPennies = ((int)totalAmountOfCents - (numberOfQuarters*25) - (numberOfDimes*10) - (numberOfNickles*5));

    cout<<numberOfQuarters<<" quarters "<<numberOfDimes<<" dimes "<<numberOfNickles<<" nickles "<<numberOfPennies<<" pennies";
};

