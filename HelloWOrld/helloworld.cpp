
#include <iostream>
using namespace std;
// int main(){
//     int age;
//     cout<<"Hello, please provide your age"<<endl;
//     cin>>age;
//     cout<<"Your age is "<<age<<endl;
//     return age;
// }
char toUppercase(char charToBeConverted){
    int asciiOffset = 32; 
    int intRepresentationOfLowerCase = (int) charToBeConverted;
    int upperCaseInt = intRepresentationOfLowerCase + asciiOffset;
    return (char)upperCaseInt;
}

int main(){
    int daysInWeek = 7;

    // int daysTraveled;
    // cout<<"Please provide how many day you traveled"<<endl;
    // cin>>daysTraveled;

    // int totalWeeks = daysTraveled / daysInWeek;
    // int daysLeftOver =daysTraveled % daysInWeek;
    // cout<<"You traveled "<<totalWeeks<<" weeks and "<<daysLeftOver<<" days"<<endl;
    // cout<<5.0/2;
    // char charEntered;
    // cout<<"Enter a single character";
    // cin>>charEntered;
    // cout<<charEntered;
    // cout<<(int)charEntered;
    cout<<"Enter a lower case char";
    char input;
    cin>>input;
    cout<<toUppercase(input);
    return 0;
}

