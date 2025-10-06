#include<iostream>
using namespace std;

class A{
int a;
public:
	A(){
		a = 1;
	}
A operator ++(){
	A sum;
	sum.a = a * 5;
	return sum;
}
void display(){
	cout << "The value of a is " << a;
}
};

int main(){
A obj;
obj = ++obj;
obj.display();

return 0;
}

