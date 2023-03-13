#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

class Student{
	private:
		int sap;
		string name;
		int semester;
		float cgpa;
	public:
		Student(): sap(0), name("\0"), semester(0), cgpa(0)
		{
			cout<<"Null Constructor!!!"<<endl;
		}
		Student(int s, string n, int sem, float c): sap(s), name(n), semester(sem), cgpa(c)
		{
			cout<<"Parametric Constructor!!!"<<endl;
		}
		~Student(){
			cout<<"Destructor!!!"<<endl;
		}
		void display(){
			cout<<"Sap ID : "<<sap<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"Semester : "<<semester<<endl;
			cout<<"CGPA : "<<cgpa<<endl;
		}

};

void getStudentData(){
	int sap;
	string name;
	int semester;
	float cgpa;
	
	ofstream fout;
	fout.open("Line.txt", ios::out);
	cout<<"Sap ID : ";
	cin>>sap;
	fout<<sap;
	cout<<"\nName : ";
	cin>>name;
	fout<<" "<<name;
	cout<<"\nSemester : ";
	cin>>semester;
	fout<<" "<<semester;
	cout<<"\nCGPA : ";
	cin>>cgpa;
	fout<<" "<<cgpa;
	
	fout.close();
}

void showStudentData(){
	string line;
	
	cout<<"\n-------Reading Line From File!!!-------\n"<<endl;
	ifstream fin;
	fin.open("Line.txt", ios::in);
	if(fin.is_open()){
	while(getline(fin,line))
	cout<<line<<endl;
	fin.close();
	
	stringstream ss(line);
	
	int s;
	string n;
	int sem;
	float c;
	
	ss>>s>>n>>sem>>c;
	cout<<"\n-------Splitting-------"<<endl;
	cout<<s<<endl<<n<<endl<<sem<<endl<<c<<endl;
	cout<<"-----------------------"<<endl;
	Student s1(s,n,sem,c);
	s1.display();
	
	}
	else
	cout<<"No Such File Exists!!!"<<endl;
	
	
}

int main(){
	
	int choice; 
	
	do{
	cout<<"\n============Student Portal============\n";
	
	cout<<"1. Add Student\n"; 
	cout<<"2. Read All Students\n";
	cout<<"3. Exit\n";
	cout<<"Select an option: ";
	cin>>choice;
	
	switch(choice){
		case 1:
			getStudentData();
			break;
		case 2:
			showStudentData();
			break;
		case 3:
			cout<<"\nThank You\n";
			break;
		default:
			cout<<"Enter a valid option";
		}
	}while(choice < 3);

	return 0;
}