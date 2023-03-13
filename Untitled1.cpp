#include <iostream>
using namespace std;

class Student{
	private:
	int sap_id;
	string name;
	int semester;
	float cgpa;
	public:
		Student(): sap_id(0), name("\0"), semester(0), cgpa(0.0)
		{
			cout<<"Null Constructor"<<endl<<endl;
		}
		Student(int sap, string nm, int smstr, float gpa): sap_id(sap), name(nm), semester(smstr), cgpa(gpa)
		{
			cout<<"Parametrized Constructor"<<endl<<endl;
		}
		Student(Student &s2){
			cout<<"Copy Constructor\n";
			sap_id=s2.sap_id;
			cout<<"Sap ID : "<<sap_id<<endl;
			name=s2.name;
			cout<<"Name : "<<name<<endl;
			semester=s2.semester;
			cout<<"Semester : "<<semester<<endl;
			cgpa=s2.cgpa;
			cout<<"CGPA : "<<cgpa<<endl;
			cout<<"--------------------------------"<<endl;
		}
		~Student(){
			cout<<"Destructor!!!"<<endl;
		}
		void display(){
			cout<<"Displaying Data"<<endl;
			cout<<"SAP ID : "<<sap_id<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"Semester : "<<semester<<endl;
			cout<<"CGPA : "<<cgpa<<endl;
			cout<<"--------------------------------"<<endl;
		}
		void setdata(){
			cout<<"Please Enter Your Information(2nd Constructor)"<<endl;
			cout<<"Sap ID: ";
			cin>>sap_id;
			cout<<"Name : ";
			cin>>name;
			cout<<"Semester : ";
			cin>>semester;
			cout<<"CGPA : ";
			cin>>cgpa;
			cout<<"--------------------------------"<<endl;
		}
		void setSapID(int sap){
			sap_id=sap;
		}
		int getSapID(){
			return sap_id;
		}
	};

int main(){
	Student s1, s2(46515, "Ali Arshad", 1, 4.0), s3, s4=s2;
	s3.setdata();
	s2.display();
	s3.display();

	
	return 0;
}