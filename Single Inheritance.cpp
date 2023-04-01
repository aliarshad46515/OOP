#include <iostream>
#include <string>

using namespace std;

class A{
	private:
		string userID;
		void ID(){
			cout<<"Private Function of Class A: ";
			cout<<userID<<endl;
		}
	protected:
		float pay;
		void Pay(){
			cout<<"Protected Function of Class A: ";
			cout<<pay<<endl;
		}
	public:
		string name;
		
		A(): userID("\0"), pay(0.0), name("\0")
		{
			cout<<"Class A's Null Constructor"<<endl;
		}
		
		void Name(){
			cout<<"Public Function of Class A: ";
			cout<<name<<endl;
		}
		
		void dispPrvtM(){
			cout<<"---------------------------------------------------"<<endl;
			cout<<"Accessing Private Member of Class A (Inside Class A)"<<endl;
			cout<<"Class A's Private Member: "<<userID<<endl;
			cout<<"---------------------------------------------------"<<endl;
		}
		void dispPrvtF(){
			cout<<"---------------------------------------------------"<<endl;
			cout<<"Accessing Private Function of Class A (Inside Class A)"<<endl;
			ID();
			cout<<"---------------------------------------------------"<<endl;
		}
		
};
class B: public A{
	private:
		string ID;
		void Id(){
			cout<<"Private Function of Class B: ";
			cout<<ID<<endl;
		}
	protected:
		int age;
		void Age(){
			cout<<"Protected Function of Class B: ";
			cout<<age<<endl;
		}
	public:
		string username;
		
		B(): ID("\0"), age(0.0), username("\0")
		{
			cout<<"Class B's Null Constructor"<<endl;
		}
		
		B(float p, string n, int a, string un){
			B();
			pay=p;
			name=n;
			age=a;
			username=un;
		}
		void Username(){
			cout<<"Public Function of Class B: ";
			cout<<username<<endl;
		}
		
		void displayPrvtM(){
			cout<<"---------------------------------------------------"<<endl;
			cout<<"Accessing Private Member of Class B (Inside Class B)"<<endl;
			cout<<"Class B's Private Member: "<<ID<<endl;
			cout<<"---------------------------------------------------"<<endl;
		}
		void displayPrvtF(){
			cout<<"---------------------------------------------------"<<endl;
			cout<<"Accessing Private Function of Class B (Inside Class B)"<<endl;
			Id();
			cout<<"---------------------------------------------------"<<endl;
		}
		void displayPubM(){
			cout<<"---------------------------------------------------"<<endl;
			cout<<"Accessing Public Members of Class A & Class B (Inside Class B)"<<endl;
			cout<<"Public Member of Class A: "<<name<<endl;
			cout<<"Public Member of Class B: "<<username<<endl;
			cout<<"---------------------------------------------------"<<endl;
		}
		void displayPubF(){
			cout<<"---------------------------------------------------"<<endl;
			cout<<"Accessing Public Functions of Class A & Class B (Inside Class B)"<<endl;
			Name();
			Username();
			cout<<"---------------------------------------------------"<<endl;
		}
		
		void displayProtD(){
			cout<<"---------------------------------------------------"<<endl;
			cout<<"Accessing Protected Member of Class A (Inside Class B): "<<pay<<endl;
			cout<<"Accessing Protected Member of Class B (Inside Class B): "<<age<<endl;
			cout<<"---------------------------------------------------"<<endl;
		}
		
		void displayProtF(){
			cout<<endl<<"---------------------------------------------------"<<endl;
			cout<<"Accessing Protected Functions of Class A & Class B (Inside Class B)"<<endl;
			Pay();
			Age();
			cout<<"---------------------------------------------------"<<endl;
		}
		
};



int main(){
	cout<<"--------Main Function--------"<<endl<<endl;
	B b1(49.7, "Osmos", 18, "Monslay");
	cout<<"---------------------------------"<<endl<<endl;
	cout<<"---------Accessing Public Functions in Main---------"<<endl<<endl;
	b1.Name();
	b1.Username();
	b1.displayProtD();
	b1.displayProtF();
	b1.displayPubM();
	b1.displayPubF();
	b1.dispPrvtM();
	b1.dispPrvtF();
	b1.displayPrvtM();
	b1.displayPrvtF();
	cout<<"\tEnd of Public Functions"<<endl;
	cout<<"---------------------------------"<<endl<<endl;
	cout<<"Accessing Public Member of Class A (Main Function): "<<b1.name<<endl;
	cout<<"Accessing Public Member of Class B (Main Function): "<<b1.username<<endl;
	cout<<"---------------------------------"<<endl<<endl;

	
	return 0;
}
