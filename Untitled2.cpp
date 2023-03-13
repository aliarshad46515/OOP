#include <iostream>
#include <fstream>
using namespace std;

class Family{
	private:
		int bro;
		int sis;
		string mom;
		string dad;
	public:
		Family():bro(0), sis(0), mom("\0"), dad("\0")
		{
			cout<<"Default Constructor is Operating!!!"<<endl;
		}
		Family(int b, int s, string m, string d): bro(b), sis(s), mom(m), dad(d)
		{
			cout<<"Parametric Constructor is Operating!!!"<<endl;
		}
		~Family(){
			cout<<"Destructor is Operating!!!"<<endl;
		}
		void display(){
			cout<<"No. of Sisters : "<<sis<<endl;
			cout<<"No. of Brothers : "<<bro<<endl;
			cout<<"Name of Mother : "<<mom<<endl;
			cout<<"Name of Father : "<<dad<<endl;
		}
		void displayFile(string line){
			cout<<line<<endl;
		}
};

int main(){
	Family F1;
	Family F2(3, 1, "Ayesha", "Ali");
	F2.display();
	int sis;
	int bro;
	string mom;
	string dad;
	ofstream fout;
	fout.open("Family.txt", ios::app);
	cout<<"\n===========Data Into File===============\n";
	cout<<"No. of Sisters : ";
	cin>>sis;
	fout<<"No. of Sisters : "<<sis<<"\n";
	cout<<"No. of Brothers : ";
	cin>>bro;
	fout<<"No. of Brothers : "<<bro<<"\n";
	cout<<"Mother's Name : ";
	cin>>mom;
	fout<<"Mother's Name : "<<mom<<"\n";
	cout<<"Father's Name : ";
	cin>>dad;
	fout<<"Father's Name : "<<dad<<"\n";
	fout<<"-------------------------"<<"\n";
	fout.close();
	
	ifstream fin;
	string line;
	fin.open("Family.txt", ios::in);
	cout<<"\n===========Data From File===============\n";
	while(getline(fin,line)){	
		F2.displayFile(line);
	}
	
	fin.close();
	
	return 0;
}