/*An inline function is a request to the compiler to insert 
the function’s code directly into the calling code to reduce the overhead of function calls.*/
#include<iostream>
using namespace std;
//Area of rectangle

inline int Area(int l, int b){
  return l * b;
}
int main(){
    int r, a, b;
    cout << "Enter length and breadth: ";
    cin >> a >> b;
    r = Area(a, b);
    cout << "Area of rectangle is: " << r;
}
