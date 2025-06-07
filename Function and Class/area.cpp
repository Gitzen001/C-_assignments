//Rectangle Area Calculator
#include <iostream>
using namespace std;

class Rectangle{
	private:
		int length, breadth;
		public:
			Rectangle(){
				length = 1;
				breadth = 1;
			}
			Rectangle(int l, int b){
				length = l;
				breadth = b;
			}
			Rectangle(Rectangle &obj){
			length = obj.length;
			breadth = obj.breadth;	
			}
			int area(){
				int calc = 0;
				calc = length * breadth;
				return calc;	
			}
			~Rectangle(){
				cout << "Rectangle with length "<< length << " and breadth " << breadth << " is destroyed." << endl;
			}
};

int main(){
	Rectangle rect1;
	cout << "Area of rectangle1 = " << rect1.area() << endl;
	
	Rectangle rect2(3, 9);
	cout << "Area of rectangle2 = " << rect2.area() << endl;
	
	Rectangle rect3(rect2);
	cout << "Area of rectangle3 = " << rect3.area() << endl;
	cout <<endl;
	return 0;
}
