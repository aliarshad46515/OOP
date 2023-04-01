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

class E: public D{
	private:
		string hairs;
		void Hairs(){
			cout<<"Private Function of Class E: ";
			cout<<hairs<<endl;
		}
	protected:
		string hairclr;
		void Colour(){
			cout<<"Protected Function of Class E: ";
			cout<<hairclr<<endl;
		}
	public:
		string eye;
		
		E(): hairs("\0"), hairclr("\0"), eye("\0")
		{
			cout<<"Class E's Null Constructor"<<endl;
		}
		E(float p, string n, int a, string un, int y, int exp, string t, int m, string h, string hc, string i)
		{
			E();
			pay=p;
			name=n;
			age=a;
			username=un;
			year=y;
			expiry=exp;
			taste=t;
			mfg=m;
			hairs=h;
			hairclr=hc;
			eye=i;
		}
		
		void Eye(){
			cout<<"Public Function of Class E: ";
			cout<<eye<<endl;
		}
		void EPrvtM(){
			cout<<"---------------------------------------------------"<<endl;
			cout<<"Accessing Private Member of Class E (Inside Class E)"<<endl;
			cout<<"Class E's Private Member: "<<hairs<<endl;
			cout<<"---------------------------------------------------"<<endl;
		}
		void EPrvtF(){
			cout<<"---------------------------------------------------"<<endl;
			cout<<"Accessing Private Function of Class E (Inside Class E)"<<endl;
			Hairs();
			cout<<"---------------------------------------------------"<<endl;
		}
		void EPubF(){
			cout<<"---------------------------------------------------"<<endl;
			cout<<"Accessing Public Functions of Class A, B, C, D  & E (Inside Class E)"<<endl;
			Name();
			Username();
			Expire();
			MFG();
			Eye();
			cout<<"---------------------------------------------------"<<endl;
		}	
		void EProtF(){
			cout<<endl<<"---------------------------------------------------"<<endl;
			cout<<"Accessing Protected Functions of Class A, B, C, D  & E (Inside Class E)"<<endl;
			Pay();
			Age();
			Year();
			Taste();
			Colour();
			cout<<"---------------------------------------------------"<<endl;
		}
		void EProtM(){
			cout<<"---------------------------------------------------"<<endl;
			cout<<"Accessing Class A's Protected Member Pay(Inside Class E)= $"<<pay<<endl;
			cout<<"Accessing Class B's Protected Member Age(Inside Class E)= "<<age<<"Years"<<endl;
			cout<<"Accessing Class C's Protected Member Year(Inside Class E)= $"<<year<<endl;
			cout<<"Accessing Class D's Protected Member Taste(Inside Class E)= "<<taste<<endl;
			cout<<"Accessing Class E's Protected Member Taste(Inside Class E)= "<<eye<<endl;
			cout<<"---------------------------------------------------"<<endl;
		}
		void EPubM(){
			cout<<"---------------------------------------------------"<<endl;
			cout<<"Accessing Public Members of Class A, B, C, D  & E (Inside Class E)"<<endl;
			cout<<"Public Member of Class A: "<<name<<endl;
			cout<<"Public Member of Class B: "<<username<<endl;
			cout<<"Public Member of Class C: "<<expiry<<endl;
			cout<<"Public Member of Class D: "<<mfg<<endl;
			cout<<"Public Member of Class E: "<<eye<<endl;
			cout<<"---------------------------------------------------"<<endl;
		}
};

class F: public D{
	private:
		string shirt;
		void Shirt(){
			cout<<"Private Function of Class F: ";
			cout<<shirt<<endl;
		}
	protected:
		string shirtclr;
		void SColour(){
			cout<<"Protected Function of Class F: ";
			cout<<shirtclr<<endl;
		}
	public:
		string pants;
		
		F(): shirt("\0"), shirtclr("\0"), pants("\0")
		{
			cout<<"Class F's Null Constructor"<<endl;
		}
		F(float p, string n, int a, string un, int y, int exp, string t, int m, string s, string sc, string pnt)
		{
			F();
			pay=p;
			name=n;
			age=a;
			username=un;
			year=y;
			expiry=exp;
			taste=t;
			mfg=m;
			shirt=s;
			shirtclr=sc;
			pants=pnt;
		}
		
		void Pants(){
			cout<<"Public Function of Class F: ";
			cout<<pants<<endl;
		}
		void FPrvtM(){
			cout<<"---------------------------------------------------"<<endl;
			cout<<"Accessing Private Member of Class F (Inside Class F)"<<endl;
			cout<<"Class F's Private Member: "<<shirt<<endl;
			cout<<"---------------------------------------------------"<<endl;
		}
		void FPrvtF(){
			cout<<"---------------------------------------------------"<<endl;
			cout<<"Accessing Private Function of Class F (Inside Class F)"<<endl;
			Shirt();
			cout<<"---------------------------------------------------"<<endl;
		}
		void FPubF(){
			cout<<"---------------------------------------------------"<<endl;
			cout<<"Accessing Public Functions of Class A, B, C, D  & F (Inside Class F)"<<endl;
			Name();
			Username();
			Expire();
			MFG();
			Pants();
			cout<<"---------------------------------------------------"<<endl;
		}	
		void FProtF(){
			cout<<endl<<"---------------------------------------------------"<<endl;
			cout<<"Accessing Protected Functions of Class A, B, C, D  & F (Inside Class F)"<<endl;
			Pay();
			Age();
			Year();
			Taste();
			SColour();
			cout<<"---------------------------------------------------"<<endl;
		}
		void FProtM(){
			cout<<"---------------------------------------------------"<<endl;
			cout<<"Accessing Class A's Protected Member Pay(Inside Class E)= $"<<pay<<endl;
			cout<<"Accessing Class B's Protected Member Age(Inside Class E)= "<<age<<"Years"<<endl;
			cout<<"Accessing Class C's Protected Member Year(Inside Class E)= $"<<year<<endl;
			cout<<"Accessing Class D's Protected Member Taste(Inside Class E)= "<<taste<<endl;
			cout<<"Accessing Class F's Protected Member Taste(Inside Class E)= "<<shirtclr<<endl;
			cout<<"---------------------------------------------------"<<endl;
		}
		void FPubM(){
			cout<<"---------------------------------------------------"<<endl;
			cout<<"Accessing Public Members of Class A, B, C, D  & F (Inside Class F)"<<endl;
			cout<<"Public Member of Class A: "<<name<<endl;
			cout<<"Public Member of Class B: "<<username<<endl;
			cout<<"Public Member of Class C: "<<expiry<<endl;
			cout<<"Public Member of Class D: "<<mfg<<endl;
			cout<<"Public Member of Class F: "<<pants<<endl;
			cout<<"---------------------------------------------------"<<endl;
		}
};



int main(){
	cout<<"---------------------------------"<<endl<<endl;
	cout<<"\tMain Function (Class E's Oject)"<<endl;
	cout<<"---------------------------------"<<endl<<endl;
	E e1(4000, "Usman", 19, "Unknown", 2020, 2023, "Bitter", 2002, "Long", "Brown", "Black");
	cout<<"---------------------------------"<<endl<<endl;
	cout<<"---------Accessing Public Functions in Main---------"<<endl<<endl;
	e1.dispPrvtF();
	e1.dispPrvtM();
	e1.displayPrvtF();
	e1.displayPrvtM();
	e1.CPrvtF();
	e1.CPrvtM();
	e1.DPrvtF();
	e1.DPrvtM();
	e1.EPrvtF();
	e1.EPrvtM();
	e1.DProtF();
	e1.DProtM();
	e1.EProtF();
	e1.EProtM();
	e1.DPubF();
	e1.DPubM();
	e1.EPubF();
	e1.EPubM();
	cout<<"\tEnd of Public Functions"<<endl;
	cout<<"---------------------------------"<<endl<<endl;
	cout<<"\tNow Accessing Public Members and Functions in Main"<<endl;
	cout<<"---------------------------------"<<endl<<endl;
	e1.Name();
	e1.Username();
	e1.Expire();
	e1.Name();
	e1.Eye();
	cout<<"Public Member of Class A: "<<e1.name<<endl;
	cout<<"Public Member of Class B: "<<e1.username<<endl;
	cout<<"Public Member of Class C: "<<e1.expiry<<endl;
	cout<<"Public Member of Class D: "<<e1.mfg<<endl;
	cout<<"Public Member of Class E: "<<e1.eye<<endl<<endl;
	cout<<"---------------------------------"<<endl<<endl;
	cout<<"\tMain Function (Class F's Object)"<<endl;
	cout<<"---------------------------------"<<endl<<endl;
	F f1(5000, "Ahmad", 17, "Osmos", 2017, 2027, "Sour", 2000, "T-shirt", "Black", "White");
	cout<<"---------------------------------"<<endl<<endl;
	cout<<"---------Accessing Public Functions in Main---------"<<endl<<endl;
	f1.dispPrvtF();
	f1.dispPrvtM();
	f1.displayPrvtF();
	f1.displayPrvtM();
	f1.CPrvtF();
	f1.CPrvtM();
	f1.DPrvtF();
	f1.DPrvtM();
	f1.FPrvtF();
	f1.FPrvtM();
	f1.DProtF();
	f1.DProtM();
	f1.FProtF();
	f1.FProtM();
	f1.DPubF();
	f1.DPubM();
	f1.FPubF();
	f1.FPubM();
	cout<<"\tEnd of Public Functions"<<endl;
	cout<<"---------------------------------"<<endl<<endl;
	cout<<"\tNow Accessing Public Members and Functions in Main"<<endl;
	cout<<"---------------------------------"<<endl<<endl;
	f1.Name();
	f1.Username();
	f1.Expire();
	f1.MFG();
	f1.Pants();
	cout<<"Public Member of Class A: "<<f1.name<<endl;
	cout<<"Public Member of Class B: "<<f1.username<<endl;
	cout<<"Public Member of Class C: "<<f1.expiry<<endl;
	cout<<"Public Member of Class D: "<<f1.mfg<<endl;
	cout<<"Public Member of Class F: "<<f1.pants<<endl<<endl;
	cout<<"---------------------------------"<<endl<<endl;
	

	return 0;
}
