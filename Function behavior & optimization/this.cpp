#include<iostream>
#include<string>

using namespace std;
class Person 
{
	private:
		int age;
		string name;
	
	public:
		Person() {
		}

		Person(int age, string name) {
			this->age = age;
			this->name = name;
		}
		
		void setName(string name) {
			this->name = name;
		}
		
		void setAge(int age) {
			this->age = age;
		}
		
		string getName() {
			return this->name;
		}
		
		int getAge() {
			return this->age;
		}
	
};

int main() {
		Person person1[2];
		person1[0].setName("smith");
		person1[1].setName("susan");
		cout<< person1[1].getName();
return 0;
}
