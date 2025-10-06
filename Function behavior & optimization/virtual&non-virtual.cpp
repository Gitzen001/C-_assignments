/*Create a base class Vehicle with two functions:
1.	A virtual function displayType()
2.	A non-virtual function showWheels()
Derive a class Car from Vehicle and override both functions.
*/

#include<iostream>
using namespace std;

class Vehicle{
	int wheels;
	public:
	Vehicle(){
		wheels = 2;
	} 
	//virtual function
virtual void displayType(){
	cout << "Number of wheels in vehicle" << endl;
};
//non-virtual function
void showWheels(){
	cout << "The Cycle have " << wheels << " wheels" <<endl;
}
};

class Car:public Vehicle{
	public:
	void displayType() override{
		cout << "The vehicle have 4 wheels" << endl;
	}
		void showWheels(){
		cout << "The tricycle have 4 wheels" << endl;
	}
	};

int main(){
Vehicle *v; //Base class pointer
//Pointer to Car
Car obj;
v = &obj;
//calls virtual function
v -> displayType(); //runtime polymorphism
//calls non-virtual function
v -> showWheels(); //compile-time binding
return 0;
}

