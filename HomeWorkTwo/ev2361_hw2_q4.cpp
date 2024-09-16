#include <iostream>
#include <string>
using namespace std;

int main()
{
    double digitOne, digitTwo;
    cout << "Please enter two positive integers, separated by a space:\n";
    cin >> digitOne >> digitTwo;
    cout << digitOne << " + " << digitTwo << " = " << digitOne + digitTwo << endl;
    cout << digitOne << " - " << digitTwo << " = " << digitOne - digitTwo << endl;
    cout << digitOne << " * " << digitTwo << " = " << digitOne * digitTwo << endl;
    cout << digitOne << " / " << digitTwo << " = " << digitOne / digitTwo << endl;
    cout << digitOne << " div " << digitTwo << " = " << (int)digitOne / (int)digitTwo << endl;
    cout << digitOne << " mod " << digitTwo << " = " << (int)digitOne % (int)digitTwo << endl;
}