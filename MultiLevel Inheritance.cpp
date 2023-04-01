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
		
		void BPrvtM(){
			cout<<"---------------------------------------------------"<<endl;
			cout<<"Accessing Private Member of Class B (Inside Class B)"<<endl;
			cout<<"Class B's Private Member: "<<ID<<endl;
			cout<<"---------------------------------------------------"<<endl;
		}
		void BPrvtF(){
			cout<<"---------------------------------------------------"<<endl;
			cout<<"Accessing Private Function of Class B (Inside Class B)"<<endl;
			Id();
			cout<<"---------------------------------------------------"<<endl;
		}
		void BPubM(){
			cout<<"---------------------------------------------------"<<endl;
			cout<<"Accessing Public Members of Class A & Class B (Inside Class B)"<<endl;
			cout<<"Public Member of Class A: "<<name<<endl;
			cout<<"Public Member of Class B: "<<username<<endl;
			cout<<"---------------------------------------------------"<<endl;
		}
		void BPubF(){
			cout<<"---------------------------------------------------"<<endl;
			cout<<"Accessing Public Functions of Class A & Class B (Inside Class B)"<<endl;
			Name();
			Username();
			cout<<"---------------------------------------------------"<<endl;
		}
		
		void BProtD(){
			cout<<"---------------------------------------------------"<<endl;
			cout<<"Accessing Protected Member of Class A (Inside Class B): "<<pay<<endl;
			cout<<"Accessing Protected Member of Class B (Inside Class B): "<<age<<endl;
			cout<<"---------------------------------------------------"<<endl;
		}
		
		void BProtF(){
			cout<<endl<<"---------------------------------------------------"<<endl;
			cout<<"Accessing Protected Functions of Class A & Class B (Inside Class B)"<<endl;
			Pay();
			Age();
			cout<<"---------------------------------------------------"<<endl;
		}
		
};

class C: public B{
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
		
		C(){
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
		void CProtD(){
			cout<<"---------------------------------------------------"<<endl;
			cout<<"Accessing Protected Member of Class A (Inside Class C): &"<<pay<<endl;
			cout<<"Accessing Protected Member of Class B (Inside Class C): "<<age<<"Years"<<endl;
			cout<<"Accessing Protected Member of Class C (Inside Class C): "<<year<<endl;
			cout<<"---------------------------------------------------"<<endl;
		}
		
		void CProtF(){
			cout<<endl<<"---------------------------------------------------"<<endl;
			cout<<"Accessing Protected Functions of Class A, B & C (Inside Class C)"<<endl;
			Pay();
			Age();
			Year();
			cout<<"---------------------------------------------------"<<endl;
		}
		void CPubM(){
			cout<<"---------------------------------------------------"<<endl;
			cout<<"Accessing Public Members of Class A, B & C (Inside Class C)"<<endl;
			cout<<"Public Member of Class A: "<<name<<endl;
			cout<<"Public Member of Class B: "<<username<<endl;
			cout<<"Public Member of Class C: "<<expiry<<endl;
			cout<<"---------------------------------------------------"<<endl;
		}
		void CPubF(){
			cout<<"---------------------------------------------------"<<endl;
			cout<<"Accessing Public Functions of Class A, B & C (Inside Class C)"<<endl;
			Name();
			Username();
			Expire();
			cout<<"---------------------------------------------------"<<endl;
		}
};

class D: public C{
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
		
		D(){
			cout<<"Class D's Null Constructor"<<endl;
		}
		D(int p, int a, int y, string t, string n, string un, string c, int exp, int m){
			D();
			pay=p;
			age=a;
			year=y;
			taste=t;
			name=n;
			username=un;
			expiry=exp;
			mfg=m;
		}
		void MFG(){
			cout<<"Public Function of Class D: ";
			cout<<mfg<<endl;
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
		void DProtD(){
			cout<<"---------------------------------------------------"<<endl;
			cout<<"Accessing Protected Member of Class A (Inside Class D): &"<<pay<<endl;
			cout<<"Accessing Protected Member of Class B (Inside Class D): "<<age<<"Years"<<endl;
			cout<<"Accessing Protected Member of Class C (Inside Class D): "<<year<<endl;
			cout<<"Accessing Protected Member of Class D (Inside Class D): "<<taste<<endl;
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
};



int main(){
	cout<<"--------Main Function--------"<<endl<<endl;
	D d1(4000, 19, 2020, "Usman", "Unknown", "Red", "Bitter", 2023, 2002);
	cout<<"---------------------------------"<<endl<<endl;
	cout<<"---------Accessing Public Functions in Main---------"<<endl<<endl;
	d1.dispPrvtF();
	d1.dispPrvtM();
	d1.BPrvtF();
	d1.BPrvtM();
	d1.CPrvtF();
	d1.CPrvtM();
	d1.DPrvtF();
	d1.DPrvtM();
	d1.BProtF();
	d1.BProtD();
	d1.CProtF();
	d1.CProtD();
	d1.DProtF();
	d1.DProtD();
	d1.BPubF();
	d1.BPubM();
	d1.CPubF();
	d1.CPubM();
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
