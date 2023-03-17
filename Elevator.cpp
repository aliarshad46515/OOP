#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

class Elevator{
	private:
		string comp_name;
		float max_load;
		string cur_loc;
		string color;
		int model;
		int ID;
		int validity;
	public:
		Elevator(): comp_name("\0"), max_load(0), cur_loc("\0"), color("\0"), model(0), ID(0), validity(0)
		{
		}
		Elevator(string cn, float ml, string cl, string c, int m, int id, int v): comp_name(cn), max_load(ml), cur_loc(cl), color(c), model(m), ID(id), validity(v)
		{
			cout<<"Parametric Constructor"<<endl;
		}
		~Elevator()
		{
			cout<<"Destructor"<<endl;
		}
		void display(){
			cout<<"------------Elevator's Information------------"<<endl<<endl;
			cout<<"Elevator'sCompany Name : "<<comp_name<<endl;
			cout<<"Elevator's Max Load : "<<max_load<<" Kg"<<endl;
			cout<<"Elevator's Current Location : "<<cur_loc<<endl;
			cout<<"Elevator's Color : "<<color<<endl;
			cout<<"Elevator's Model (Year) : "<<model<<endl;
			cout<<"Elevator's ID Number : "<<ID<<endl;
			cout<<"Elevator's Validity Till : "<<validity<<endl;
			cout<<endl<<"------------------------------------"<<endl;
		}
		void goUp(){
			cout<<"Elevator's Going Up!!!"<<endl;
			for(int i=0; i<4; i++){
				cout<<"-";
				Sleep(500);
			}
			cout<<"\nWe Have Reached Your Destination!!!"<<endl;
			cout<<"Thank You!!!"<<endl;
		}
		void goDown(){
			cout<<"Elevator's Going Down!!!"<<endl;
			for(int i=0; i<4; i++){
				cout<<"-";
				Sleep(500);
			}
			cout<<"\nWe Have Reached Your Destination!!!"<<endl;
			cout<<"Thank You!!!"<<endl;
		}
		void getCom(string cn){
			comp_name=cn;
		}
		string setCom(){
			return comp_name;
		}
		void getMax(float ml){
			max_load=ml;
		}
		float setMax(){
			return max_load;
		}
		void getCur(string cl){
			cur_loc=cl;
		}
		string setCur(){
			return cur_loc;
		}
		void getC(string c){
			color=c;
		}
		string setC(){
			return color;
		}
		void getM(int m){
			model=m;
		}
		int setM(){
			return model;
		}
		void getID(int id){
			ID=id;
		}
		int setID(){
			return ID;
		}
		void getV(int v){
			validity=v;
		}
		int setV(){
			return validity;
		}
};

int main(){
	Elevator E1;
		string cn;
		float ml;
		string cl;
		string c;
		int m;
		int id;
		int v;
		int option;
		char choice;
		do{
		cout<<"\n-----------Elevator's Menu-----------"<<endl<<endl;
		cout<<"1) Use Elevator \n2) Elevator's Information \n3) Exit"<<endl;
		cout<<"Please Select Your Option : ";
		cin>>option;
		switch(option){
			case 1:
				cout<<"1) To Go Up \n2) To Go Down \n3) Exit"<<endl;
				cout<<"Please Select Your Option : ";
				cin>>option;
				switch(option){
					case 1:
						cout<<"1) First Floor \n2) Second Floor \n3) Last Floor \n4) Exit"<<endl;
						cout<<"Please Select Your Floor : ";
						cin>>option;
						if(option==1 || option==2 || option==3){
						E1.goUp();
						}
						else if(option==4){
							cout<<"Thank You For Using!!!"<<endl;
						}
						else{
							cout<<"Invalid Entry!!!"<<endl;
						}
						break;
					case 2:
						cout<<"1) First Floor \n2) Second Floor \n3) Last Floor \n4) Exit"<<endl;
						cout<<"Please Select Your Floor : ";
						cin>>option;
						if(option==1 || option==2 || option==3){
						E1.goDown();
						}
						else if(option==4){
							cout<<"Thank You For Using!!!"<<endl;
						}
						else{
							cout<<"Invalid Entry!!!"<<endl;
						}
						break;
					case 3:
						cout<<"\nThank You For Using!!!"<<endl;
						break;
					default:
						cout<<"\nInvalid Selection!!!"<<endl;
						break;
				}
				break;
			case 2:
				cout<<"1) Add Information \n2) Display Information \n3)Exit"<<endl;
				cout<<"Please Select Your Option : ";
				cin>>option;
				switch(option){
					case 1:
						cout<<"\n-------Please Enter Elevator's Information-------"<<endl<<endl;
						cout<<"Elevator's Company Name : ";
						cin.ignore();
						getline(cin, cn);
						cout<<"Elevator's Max Load (Kg) : ";
						cin>>ml;
						cout<<"Elevator's Current Location : ";
						cin.ignore();
						getline(cin, cl);
						cout<<"Elevator's Color : ";
						cin.ignore();
						getline(cin, c);
						cout<<"Elevator's Model (Year) : ";
						cin>>m;
						cout<<"Elevator's ID Number : ";
						cin>>id;
						cout<<"Elevator's Validity Till : ";
						cin>>v;
						E1.getCom(cn);
						E1.getMax(ml);
						E1.getCur(cl);
						E1.getC(c);
						E1.getM(m);
						E1.getID(id);
						E1.getV(v);
						break;
					case 2:
						E1.display();
						break;
					case 3:
						cout<<"Thank You For Using!!!"<<endl;
						break;
					default:
						cout<<"Invalid Entry!!!"<<endl;
						break;
				}
				break;
			case 3:
				cout<<"Thank You!!!"<<endl;
				break;
			default:
				cout<<"Invalid Selection!!!"<<endl;
				break;
		}
		cout<<"\nWant To Use Again!!!(Y/N)";
		cin>>choice;
	}while(choice=='Y' || choice=='y');
		
	return 0;	
}