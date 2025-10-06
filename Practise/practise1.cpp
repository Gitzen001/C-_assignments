#include<iostream>
#include<fstream>

using namespace std;

class Student{
	double marks;
	char name[30];
	int roll;
	char addr[20];
	public:
		void setdata(){
			cout << "Enter name: ";
			cin.getline(name, 30);
			cout << "Enter roLL: ";
			cin >> roll;
			cout << "Enter marks: ";
			cin >> marks;
			cin.ignore();
			cout << "Enter Address: ";
			cin.getline(addr, 20);
			cout << endl;
		}
		
		int getRoll(){
			return roll;
		}
		
		void modify(){
		cout << "Modify name: ";
		cin.getline(name, 30);
		cout << "Modify marks: ";
		cin >> marks;
		cin.ignore();
		cout << "Modify address: ";
		cin.getline(addr, 20);
		}
		
		void display(){

			cout << "Name: " << name << "\nRoll: " << roll << "\nMarks: " << marks << "\nAddress: " << addr << endl;
		
		}	
};
int main(){
	int n = 0, i;
	cout << "Enter number of records: ";
	cin >> n;
	cin.ignore();
	if(n <= 0){
		cout << "\nRecords cant be null" << endl;
		return 0;
	}

Student std[n]; 
ofstream fout("student.txt");

 for(i = 0; i < n; i++){
 	std[i].setdata();
	fout.write((char*)&std[i], sizeof(std[i]));
 }
 fout.close();
 
 cout << "\nModifying sections" << endl;
 int modRoll, rollFound = 0;
 Student temp;
 
 cout << "Enter a roll no. to modify its data: ";
 cin >> modRoll;
 cin.ignore();
 
 fstream fmod("student.txt", ios::out | ios::in);
 while(fmod.read((char*)&temp, sizeof(temp))){
 	if(temp.getRoll() == modRoll){
 		rollFound = 1;
		temp.modify();
 		fmod.seekp(-sizeof(temp), ios::cur);
 		fmod.write((char*)&temp, sizeof(temp));
 	 }
 }
 fmod.close();

if(!rollFound){
	cout << "\nTargetted roll not found..." << endl;
	return 0;
}
 
cout << "\n*******Students details*******\n";
ifstream fin("student.txt");

 while(fin.read((char*)&temp, sizeof(temp))){
 	temp.display();
 	cout << endl;
}
cout << "***********************************" << endl;
fin.close();

//Deleting record//
int delrec = 0;
cout << "Enter a roll to delete: ";
cin >> delrec;
cin.ignore();
bool deleted = false;

ifstream finDel("student.txt");
ofstream newfile("temp.txt");

while(finDel.read((char*)&temp, sizeof(temp))){
	if(temp.getRoll() == delrec){
		cout << "\nDeleted Records: " << endl;		
		temp.display();
		cout << endl;
		deleted = true;
		continue;
	}
	newfile.write((char*)&temp, sizeof(temp));
}
finDel.close();
newfile.close();

if(!deleted){
	cout << "\nTarget unavailable..." << endl;
	return -1;
}
remove("student.txt");
rename("temp.txt", "student.txt");
cout << "\n*******Record after deleting...*******" << endl;
ifstream ftemp("student.txt");
while(ftemp.read((char*)&temp, sizeof(temp))){
	temp.display();
	cout << endl;
}
cout << "***************************************" << endl;
ftemp.close();
return 0;
}
