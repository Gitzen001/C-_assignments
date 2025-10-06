#include<iostream>
using namespace std;

class A{
	double real, imag;
	public: 
	A(double r = 0, double i = 0){
		real = r;
		imag = i;
	}
	A operator+(const A &c){
		A temp;
		temp.real = real + c.real;
		temp.imag = imag + c.imag;
		return temp;
	}
	void display(){
		cout << real << " + " << imag << "i" << endl;
	}
};
int main(){
	 A c1(3, 2), c2(1, 7);
     A sum = c1 + c2;
	sum.display();
	return 0;
}