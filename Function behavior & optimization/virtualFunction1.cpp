/*Write a C++ program with a base class Shape that has a virtual function area(). Derive two classes Circle and Rectangle,
 override the area() function in both, and demonstrate runtime polymorphism by storing objects in a single base
 class pointer and calling area().*/
 
#include<iostream>
using namespace std;

class Shape{
double a;
public:
//Virtual function for runtime polymorphism	
virtual void area(){
  cout << "Area of Shape"<<endl;
}
};

class Circle:public Shape{
	double pie, r;
public:
	Circle(){
		pie = 3.14;
		r = 4;
	}
	void area(){
		double a;
		a = pie * r * r;
		cout << "The area of circle is " << a << endl;
			}
};


class Rectangle:public Shape{
	double l, b;
	public:
	Rectangle(){
		l = 6.14;
		b = 3;
	}
	void area(){
		double a;
		a = l * b;
		cout << "The area of rectangle is " << a;
			}
};
int main(){
Shape *ptr; //Base class pointer
Circle obj1;
Rectangle obj2;
//point to Circle object
ptr = &obj1;
ptr -> area(); //Calls Circle's area()
//point to Rectangle object
ptr = &obj2;
ptr -> area(); //Calls Rectangular's area();
return 0;
}

