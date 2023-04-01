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

class B{
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
		
};

class C{
	private:
		string model;
		void Model(){
			cout<<"Private Function of Class C: ";
			cout<<model<<endl;
		}
	protected:
		int year;
		void Year(){
			cout<<"Protected Function of Class C: ";
			cout<<year<<endl;
		}
	public:
		int expiry;

		C(): model("\0"), year(0), expiry(0)
		{
			cout<<"Class C's Null Constructor"<<endl;
		}

		void Expire(){
			cout<<"Public Function of Class B: ";
			cout<<expiry<<endl;
		}
		void CPrvtM(){
			cout<<"---------------------------------------------------"<<endl;
			cout<<"Accessing Private Member of Class C (Inside Class C)"<<endl;
			cout<<"Class C's Private Member: "<<model<<endl;
			cout<<"---------------------------------------------------"<<endl;
		}
		void CPrvtF(){
			cout<<"---------------------------------------------------"<<endl;
			cout<<"Accessing Private Function of Class C (Inside Class C)"<<endl;
			Model();
			cout<<"---------------------------------------------------"<<endl;
		}
};

class D: public A, public B, public C{
	private:
		string color;
		void Color(){
			cout<<"Private Function of Class D: ";
			cout<<color<<endl;
		}
	protected:
		string taste;
		void Taste(){
			cout<<"Protected Function of Class D: ";
			cout<<taste<<endl;
		}
	public:
		int mfg;
		void MFG(){
			cout<<"Public Function of Class D: ";
			cout<<mfg<<endl;
		}
	
		D(): color("\0"), taste("\0"), mfg(0)
		{
			cout<<"Class D's Null Constructor"<<endl;
		}
		D(float p, string n, int a, string un, int y, int exp, string c, string t, int m)
		{
			D();
			pay=p;
			name=n;
			age=a;
			username=un;
			year=y;
			expiry=exp;
			color=c;
			taste=t;
			mfg=m;
		}
		
		void DPrvtM(){
			cout<<"---------------------------------------------------"<<endl;
			cout<<"Accessing Private Member of Class D (Inside Class D)"<<endl;
			cout<<"Class D's Private Member: "<<color<<endl;
			cout<<"---------------------------------------------------"<<endl;
		}
		void DPrvtF(){
			cout<<"---------------------------------------------------"<<endl;
			cout<<"Accessing Private Function of Class D (Inside Class D)"<<endl;
			Color();
			cout<<"---------------------------------------------------"<<endl;
		}
		void DProtM(){
			cout<<"---------------------------------------------------"<<endl;
			cout<<"Accessing Class A's Protected Member Pay(Inside Class D)= $"<<pay<<endl;
			cout<<"Accessing Class B's Protected Member Age(Inside Class D)= "<<age<<"Years"<<endl;
			cout<<"Accessing Class C's Protected Member Year(Inside Class D)= $"<<year<<endl;
			cout<<"Accessing Class D's Protected Member Taste(Inside Class D)= "<<taste<<endl;
			cout<<"---------------------------------------------------"<<endl;
		}
		void DPubM(){
			cout<<"---------------------------------------------------"<<endl;
			cout<<"Accessing Public Members of Class A, B, C & D (Inside Class D)"<<endl;
			cout<<"Public Member of Class A: "<<name<<endl;
			cout<<"Public Member of Class B: "<<username<<endl;
			cout<<"Public Member of Class C: "<<expiry<<endl;
			cout<<"Public Member of Class D: "<<mfg<<endl;
			cout<<"---------------------------------------------------"<<endl;
		}
		void DPubF(){
			cout<<"---------------------------------------------------"<<endl;
			cout<<"Accessing Public Functions of Class A, B, C & D (Inside Class D)"<<endl;
			Name();
			Username();
			Expire();
			MFG();
			cout<<"---------------------------------------------------"<<endl;
		}	
		void DProtF(){
			cout<<endl<<"---------------------------------------------------"<<endl;
			cout<<"Accessing Protected Functions of Class A, B, C & D (Inside Class D)"<<endl;
			Pay();
			Age();
			Year();
			Taste();
			cout<<"---------------------------------------------------"<<endl;
		}
};



int main(){
	cout<<"--------Main Function--------"<<endl<<endl;
	D d1(4000, "Usman", 19, "Unknown", 2020, 2023, "Red", "Bitter", 2002);
	cout<<"---------------------------------"<<endl<<endl;
	cout<<"---------Accessing Public Functions in Main---------"<<endl<<endl;
	d1.dispPrvtF();
	d1.dispPrvtM();
	d1.displayPrvtF();
	d1.displayPrvtM();
	d1.CPrvtF();
	d1.CPrvtM();
	d1.DPrvtF();
	d1.DPrvtM();
	d1.DProtF();
	d1.DProtM();
	d1.DPubF();
	d1.DPubM();
	cout<<"\tEnd of Public Functions"<<endl;
	cout<<"---------------------------------"<<endl<<endl;
	cout<<"Now Accessing Public Members and Functions in Main"<<endl;
	cout<<"---------------------------------"<<endl<<endl;
	d1.Name();
	d1.Username();
	d1.Expire();
	d1.MFG();
	cout<<"Public Member of Class A: "<<d1.name<<endl;
	cout<<"Public Member of Class B: "<<d1.username<<endl;
	cout<<"Public Member of Class C: "<<d1.expiry<<endl;
	cout<<"Public Member of Class D: "<<d1.mfg<<endl;
	cout<<"---------------------------------"<<endl;

		
	return 0;
}
