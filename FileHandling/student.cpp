#include<iostream>
#include<fstream>

using namespace std;

class Student
{
	int roll;
	char name[30];
	double marks;
	
public:
void input() {
	cout << "Enter name: ";
	cin.getline(name, 30);
	cout << "Enter Roll: ";
	cin >> roll;
	cout << "Enter marks: ";
	cin >> marks;
	cin.ignore();
}
int getRoll() {
	return roll;
}
	void display() {
		cout << "Name: " << name << "\nRoll: " << roll << "\nMarks: " << marks << endl;
	}
	void modify() {
		cout << "Modify Name: ";
		cin.getline(name, 30);
		cout << "Modify Marks: ";
		cin >> marks;
		cin.ignore();
	}
};

int main(){
Student std[5];
ofstream fout("student.dat", ios::binary);
int i, modRoll;
int flag =0;

for(i = 0; i < 5; i++){
	std[i].input();
	fout.write((char*)&std[i], sizeof(std[i]));
}
fout.close();

cout << "\nModify Section:\n";
cout << "Enter the roll number u want to modify: ";
cin >> modRoll;
cin.ignore();

Student temp;
fstream file("student.dat", ios::out | ios::in | ios::binary);
while(file.read((char*)&temp, sizeof(temp))){
if(temp.getRoll() == modRoll){
flag = 1;
temp.modify();
file.seekp(-sizeof(temp), ios::cur);
file.write((char*)&temp, sizeof(temp));	
}
}
if(!flag){
	cout << "\n\nError 404: Input roll number not found!" << endl;
	return 0;
}
file.close();

cout << "\nDisplay of the modified data......." << endl;
ifstream fin("student.dat", ios::binary);
while(fin.read((char*)&temp, sizeof(temp))){
	temp.display();
}
fin.close();
return 0;
}
