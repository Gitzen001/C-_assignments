#include <iostream>
using namespace std;
class Distance{
	private:
		int km, m;
		public: 
		void input(){
			cout << "Enter km and m:\n";
			cin >> km >> m;
			
		}
		void display(){
			cout << "Distance = " << km << "km " << m << "m ";
		
		}
		friend Distance calc(Distance, Distance); // Distance is an object
};
//friend function can access both private and public
Distance calc(Distance d1, Distance d2){
Distance output;
output.km = d1.km + d2.km;
output.m = d1.m + d2.m;
while(output.m >= 1000){
	output.km++;
	output.m -= 1000;
}
return output;	
}

int main(){
	Distance res;
	Distance obj1, obj2; 
	obj1.input();
	obj2.input();
	res = calc(obj1, obj2);
	res.display();
	return 0;
}
