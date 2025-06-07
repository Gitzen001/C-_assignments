#include<iostream>
using namespace std;

class A{
	static float dollar;
	float amount;
	public:
	void input(){
		cout << "Enter dollar: ";
		cin >> amount;
	}
	friend class B;
};
float A::dollar = 137.18;
class B{
	float conv;
	public: 
	void convert(A obj){
		conv = obj.amount * A::dollar;
	}
	void display(A obj){
		cout << endl;
		cout << "Dollar Amount: " << obj.amount <<"$"<< endl << "NepaliRs: " << conv <<"Rs";
	}
};
int main(){
	A dollar;
	B Rs;
	dollar.input();
	Rs.convert(dollar);
	Rs.display(dollar);
}
