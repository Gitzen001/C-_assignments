#include <iostream>
using namespace std;

void multiply(int a, int b){
int mul = 0;
mul = a * b;
cout << "Product of a & b = "<<mul<<endl;
}
void multiply(int a, int b, int c){
    int mul = 0;
    mul = a * b * c;
   cout << "Product of a,b & c= "<<mul<<endl;
}
void multiply(float a, float b){
float mul = 0;
mul = a * b;
cout << "Product of a & b = "<<mul<<endl;
}
int main(){
multiply(2, 3);
multiply(4, 5, 10);
multiply(2.5f, 10.5f);
return 0;
}