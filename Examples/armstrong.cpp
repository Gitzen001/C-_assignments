#include <iostream>
#include <cmath>
using namespace std;

int main(){ 
 int num=0, temp=0, rem=0, arms=0, count=0;
 cout << "Enter a number: ";
 cin >> num;

 if(num < 0){
    cout << "Armstrong cant be negative!" <<endl;
    return 0;
 }
 if(!(num > 0)){
    cout << "Invalid entry please enter integer number!"<<endl;
    return 0;
 }
 temp = num;
 while(temp!=0){
    count++;
    temp/=10;
 }
 temp = num;

 while(temp!=0){
    rem = temp % 10;
    arms = arms + pow(rem, count);
    temp = temp/10;
 }
 if(arms == num){
    cout << num << " is an armstrong number" <<endl;
 }
 else{
    cout << num << " is not an armstrong number" << endl;
 }

    return 0;
}