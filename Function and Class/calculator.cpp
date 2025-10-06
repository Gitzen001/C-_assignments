//Simple Calculator with Two Numbers 
#include<iostream>
using namespace std;

class Calculator{
	int a, b;
	public:
		Calculator(int num1, int num2){
			a = num1;
			b = num2;
		}
		Calculator(Calculator &obj){
			a = obj.a;
			b = obj.b;
	}
	int add(){
	return a + b;
	}
	int subtract(){
		return a - b;
	}
	int multiply(){
	return a * b;
	}
	int divide(){
		if(b != 0){
		return a / b;	
		}
//		else{
//			cout << "INF" << endl;
//			return 0;
//		}
	}
	~Calculator(){
		cout << "Calculator objects with values a = " << a << " and b = " << b << " is destroyed." << endl;
	}
};

int main(){
	int a, b;
	cout << "Enter two integers numbers:\n";
	cin >> a >> b;
	Calculator numbers(a, b); 
	cout << "The addition of " << a << " and " << b << " = " << numbers.add() << endl;
	cout << "The subtraction of " << a << " and " << b << " = " << numbers.subtract() << endl;
	cout << "The product of " << a << " and " << b << " = " << numbers.multiply() << endl;
	cout << "The division of " << a << " and " << b << " = " << numbers.divide() << endl;
	cout << endl;
	Calculator copy(numbers);
	cout << "The addition (copy) = " << copy.add() << endl;
	cout << "The subtraction (copy) = " << copy.subtract() << endl;
	cout << "The product (copy) = " << copy.multiply() << endl;
	cout << "The division (copy) = " << copy.divide() << endl;
	cout << endl;
	return 0;
}
