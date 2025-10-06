//Create an abstract class Employee with a pure virtual function calculateSalary(). 
//Derive two classes FullTimeEmployee and PartTimeEmployee that implement calculateSalary() differently.

#include<iostream>
using namespace std;

class Employee{
	public:
virtual void calculateSalary() = 0; //PureVirtualFunction
};
class FullTimeEmployee:public Employee{
		double monthsal;	
	public:
	
		FullTimeEmployee(double sal){
			monthsal = sal;
		}
	void calculateSalary(){
		cout << "The full time employee salary is " << monthsal << endl;
	}
};
class PartTimeEmployee:public Employee{
		double hrWork, hrRate;
	public:
		PartTimeEmployee(double w, double r){
			hrWork = w;
			hrRate = r;
		}
		void calculateSalary(){
		double sal;
		sal = hrWork * hrRate;
		cout << "The part time employee salary is " << sal;
	}
	
};
int main(){
	//Employee e  (ERROR: cannot create object of abstract class)
Employee *emp; //Base class Pointer
FullTimeEmployee obj1(50000);
PartTimeEmployee obj2(35, 700);
//Pointed to FullTimeEmployee
emp = &obj1;
emp -> calculateSalary();
//Pointed to PartTimeEmployee
emp = &obj2;
emp -> calculateSalary();
return 0;
}

