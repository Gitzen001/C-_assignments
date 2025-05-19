#include <iostream>
#include <cmath>

using namespace std;

int main(){
int ch=0, num=0;
int p=0, t=0, r=0, CI=0, SI = 0, amount = 0;

cout << endl;
cout << "*************MENU****************";
cout << endl;
cout << "1. Simple Interest\n2. Compound Interest\n";
cout << "**********************************";
cout << endl;

cout << "Enter your choice(1-2): ";
cin >> ch;
cout << "Enter Principle, Time and Rate: ";
cin >> p >> t >> r;
switch(ch){

    case 1: 
    SI = (p*t*r)/100;
    cout << "The simple interest is: " << SI;
    break;


    case 2: 
    amount = p * pow((1 + r / 100), t);
    CI = amount - p;
     cout << "The compound interest is: " << CI;
    break;
    
    default:
    cout << "Invalid entry!" << endl;
    break;
    }
    return 0;
}