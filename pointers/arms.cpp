#include <iostream>
#include <cmath>
using namespace std;

int main(){ 
 int num=0, temp=0, rem=0, arms=0, count=0;
 int *p1, *p2, *p3, *t, *c;
 p1 = &num, p2 = &rem, p3 = &arms, t = &temp, c = &count;
 cout << "Enter a number: ";
 cin >> num;

 if(*p1 < 0){
    cout << "Armstrong cant be negative!" <<endl;
    return 0;
 }
 if(!(*p1 > 0)){
    cout << "Invalid entry please enter integer number!"<<endl;
    return 0;
 }
 *t = *p1;
 while(*t!=0){
    (*c)++;
    *t/=10;
 }
 *t = *p1;

 while(*t!=0){
     *p2 = *t % 10;
    *p3 = *p3 + pow(*p2, *c);
    *t = *t/10;
 }
 if(*p3 == *p1){
    cout << *p1 << " is an armstrong number" <<endl;
 }
 else{
    cout << *p1 << " is not an armstrong number" << endl;
 }

    return 0;
}