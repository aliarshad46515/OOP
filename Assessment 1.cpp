#include <iostream>
using namespace std;

float Total_Amount=0.0;
float Total_Paid=0.0;

void babies();
void toddlers();
void kids();
void adults();
void teens();
void pensioner();
void TotalBill();

int main(){
	int opt;
	char again;
	cout<<"\t Welcome to SYD Family Medical Centre"<<endl<<endl;
	cout<<"*********************************************"<<endl;
	do{
		cout<<"Choose patient age: (type numbers from 1-6 to choose)"<<endl;
		cout<<"1) Babies aged 0-2 \n2) Toddlers aged 2-5 \n3) Kids aged 5-12 \n4) Teens aged 12-18 \n5) Adults aged 18-50";
		cout<<"\n6) Pensioner aged 60+"<<endl;
		cin>>opt;
		switch(opt){
			case 1:
				babies();
				break;
			case 2:
				toddlers();
				break;
			case 3:
				kids();
				break;
			case 4:
				teens();
				break;
			case 5:
				adults();
				break;
			case 6:
				pensioner();
				break;
			default:
				cout<<"Invalid Choice!!!"<<endl;
				break;
		}
		cout<<"\n\nDo you want to repeat for another customer?(Type y/n)"<<endl;
		cin>>again;
	}
	while(again=='y' || again=='Y');
	
	TotalBill();
	
	cout<<"\n\n Thank You for using SYD Family Medical Centre"<<endl;
	
	return 0;
}

void babies(){
	int opt;
	char sel;
	int amount=0;
	float pay=0.0;
	
	cout<<"Choose Service Level: (type numbers from 1-4 to choose)"<<endl;
	cout<<"1) GP Service \n2) Pathology \n3) Eye-check Up \n4) Dental"<<endl;
	cin>>opt;
	switch(opt){
		case 1:
			amount=100;
			cout<<"Does the patient have Medicare/private insurance?(Type y/n)"<<endl;
			cin>>sel;
			if(sel=='y' || sel=='Y'){
				pay=pay+(amount/100.0);
				pay=pay*70;
				pay=amount-pay;
				cout<<"\nAmount Payable-$"<<pay<<endl;
			}
			else if(sel=='n' || sel=='N'){
				pay=pay+amount;
				cout<<"Amount Payable-$"<<pay<<endl;
			}
			else{
				cout<<"Invalid Entry!!!"<<endl;
			}
			break;
		case 2:
			amount=350;
			cout<<"Does the patient have Medicare/private insurance?(Type y/n)"<<endl;
			cin>>sel;
			if(sel=='y' || sel=='Y'){
				pay=pay+(amount/100.0);
				pay=pay*85;
				pay=amount-pay;
				cout<<"\nAmount Payable-$"<<pay<<endl;
			}
			else if(sel=='n' || sel=='N'){
				pay=pay+amount;
				cout<<"Amount Payable-$"<<pay<<endl;
			}
			else{
				cout<<"Invalid Entry!!!"<<endl;
			}
			break;
		case 3:
			amount=200;
			cout<<"Does the patient have Medicare/private insurance?(Type y/n)"<<endl;
			cin>>sel;
			if(sel=='y' || sel=='Y'){
				pay=pay+(amount/100.0);
				pay=pay*65;
				pay=amount-pay;
				cout<<"\nAmount Payable-$"<<pay<<endl;
			}
			else if(sel=='N' || sel=='n'){
				pay=pay+amount;
				cout<<"Amount Payable-$"<<pay<<endl;
			}
			else{
				cout<<"Invalid Entry!!!"<<endl;
			}
			break;
		case 4:
			amount=250;
			cout<<"Does the patient have Medicare/private insurance?(Type y/n)"<<endl;
			cin>>sel;
			if(sel=='y' || sel=='Y'){
				pay=pay+(amount/100.0);
				pay=pay*75;
				pay=amount-pay;
				cout<<"\nAmount Payable-$"<<pay<<endl;
			}
			else if(sel=='n' || sel=='N'){
				pay=pay+amount;
				cout<<"Amount Payable-$"<<pay<<endl;
			}
			else{
				cout<<"Invalid Entry!!!"<<endl;
			}
			break;
		default:
			cout<<"Invalid Selection!!!"<<endl;
			break;
	}
	
	Total_Amount=Total_Amount+amount;
	Total_Paid=Total_Paid+pay;
}

void toddlers(){
	int opt;
	char sel;
	int amount;
	float pay=0.0;
	
	cout<<"Choose Service Level: (type numbers from 1-4 to choose)"<<endl;
	cout<<"1) GP Service \n2) Pathology \n3) Eye-check Up \n4) Dental"<<endl;
	cin>>opt;
	switch(opt){
		case 1:
			amount=110;
			cout<<"Does the patient have Medicare/private insurance?(Type y/n)"<<endl;
			cin>>sel;
			if(sel=='y' || sel=='Y'){
				pay=pay+(amount/100.0);
				pay=pay*91;
				pay=amount-pay;
				cout<<"\nAmount Payable-$"<<pay<<endl;
			}
			else if(sel=='n' || sel=='N'){
				pay=pay+amount;
				cout<<"Amount Payable-$"<<pay<<endl;
			}
			else{
				cout<<"Invalid Entry!!!"<<endl;
			}
			break;
		case 2:
			amount=215;
			cout<<"Does the patient have Medicare/private insurance?(Type y/n)"<<endl;
			cin>>sel;
			if(sel=='y' || sel=='Y'){
				pay=pay+(amount/100.0);
				pay=pay*79;
				pay=amount-pay;
				cout<<"\nAmount Payable-$"<<pay<<endl;
			}
			else if(sel=='n' || sel=='N'){
				pay=pay+amount;
				cout<<"Amount Payable-$"<<pay<<endl;
			}
			else{
				cout<<"Invalid Entry!!!"<<endl;
			}
			break;
		case 3:
			amount=270;
			cout<<"Does the patient have Medicare/private insurance?(Type y/n)"<<endl;
			cin>>sel;
			if(sel=='y' || sel=='Y'){
				pay=pay+(amount/100.0);
				pay=pay*88;
				pay=amount-pay;
				cout<<"\nAmount Payable-$"<<pay<<endl;
			}
			else if(sel=='n' || sel=='N'){
				pay=pay+amount;
				cout<<"Amount Payable-$"<<pay<<endl;
			}
			else{
				cout<<"Invalid Entry!!!"<<endl;
			}
			break;
		case 4:
			amount=295;
			cout<<"Does the patient have Medicare/private insurance?(Type y/n)"<<endl;
			cin>>sel;
			if(sel=='y' || sel=='Y'){
				pay=pay+(amount/100.0);
				pay=pay*55;
				pay=amount-pay;
				cout<<"\nAmount Payable-$"<<pay<<endl;
			}
			else if(sel=='n' || sel=='N'){
				pay=pay+amount;
				cout<<"Amount Payable-$"<<pay<<endl;
			}
			else{
				cout<<"Invalid Entry!!!"<<endl;
			}
			break;
		default:
			cout<<"Invalid Selection!!!"<<endl;
			break;
	}
	
	Total_Amount=Total_Amount+amount;
	Total_Paid=Total_Paid+pay;
}

void kids(){
	int opt;
	char sel;
	int amount;
	float pay=0.0;
	
	cout<<"Choose Service Level: (type numbers from 1-4 to choose)"<<endl;
	cout<<"1) GP Service \n2) Pathology \n3) Eye-check Up \n4) Dental"<<endl;
	cin>>opt;
	switch(opt){
		case 1:
			amount=95;
			cout<<"Does the patient have Medicare/private insurance?(Type y/n)"<<endl;
			cin>>sel;
			if(sel=='y' || sel=='Y'){
				pay=pay+(amount/100.0);
				pay=pay*80;
				pay=amount-pay;
				cout<<"\nAmount Payable-$"<<pay<<endl;
			}
			else if(sel=='n' || sel=='N'){
				pay=pay+amount;
				cout<<"Amount Payable-$"<<pay<<endl;
			}
			else{
				cout<<"Invalid Entry!!!"<<endl;
			}
			break;
		case 2:
			amount=315;
			cout<<"Does the patient have Medicare/private insurance?(Type y/n)"<<endl;
			cin>>sel;
			if(sel=='y' || sel=='Y'){
				pay=pay+(amount/100.0);
				pay=pay*78;
				pay=amount-pay;
				cout<<"\nAmount Payable-$"<<pay<<endl;
			}
			else if(sel=='n' || sel=='N'){
				pay=pay+amount;
				cout<<"Amount Payable-$"<<pay<<endl;
			}
			else{
				cout<<"Invalid Entry!!!"<<endl;
			}
			break;
		case 3:
			amount=215;
			cout<<"Does the patient have Medicare/private insurance?(Type y/n)"<<endl;
			cin>>sel;
			if(sel=='y' || sel=='Y'){
				pay=pay+(amount/100.0);
				pay=pay*80;
				pay=amount-pay;
				cout<<"\nAmount Payable-$"<<pay<<endl;
			}
			else if(sel=='n' || sel=='N'){
				pay=pay+amount;
				cout<<"Amount Payable-$"<<pay<<endl;
			}
			else{
				cout<<"Invalid Entry!!!"<<endl;
			}
			break;
		case 4:
			amount=315;
			cout<<"Does the patient have Medicare/private insurance?(Type y/n)"<<endl;
			cin>>sel;
			if(sel=='y' || sel=='Y'){
				pay=pay+(amount/100.0);
				pay=pay*62;
				pay=amount-pay;
				cout<<"\nAmount Payable-$"<<pay<<endl;
			}
			else if(sel=='n' || sel=='N'){
				pay=pay+amount;
				cout<<"Amount Payable-$"<<pay<<endl;
			}
			else{
				cout<<"Invalid Entry!!!"<<endl;
			}
			break;
		default:
			cout<<"Invalid Selection!!!"<<endl;
			break;
	}
	
	Total_Amount=Total_Amount+amount;
	Total_Paid=Total_Paid+pay;
}

void teens(){
	int opt;
	char sel;
	int amount;
	float pay=0.0;
	
	cout<<"Choose Service Level: (type numbers from 1-4 to choose)"<<endl;
	cout<<"1) GP Service \n2) Pathology \n3) Eye-check Up \n4) Dental"<<endl;
	cin>>opt;
	switch(opt){
		case 1:
			amount=94;
			cout<<"Does the patient have Medicare/private insurance?(Type y/n)"<<endl;
			cin>>sel;
			if(sel=='y' || sel=='Y'){
				pay=pay+(amount/100.0);
				pay=pay*87;
				pay=amount-pay;
				cout<<"\nAmount Payable-$"<<pay<<endl;
			}
			else if(sel=='n' || sel=='N'){
				pay=pay+amount;
				cout<<"Amount Payable-$"<<pay<<endl;
			}
			else{
				cout<<"Invalid Entry!!!"<<endl;
			}
			break;
		case 2:
			amount=300;
			cout<<"Does the patient have Medicare/private insurance?(Type y/n)"<<endl;
			cin>>sel;
			if(sel=='y' || sel=='Y'){
				pay=pay+(amount/100.0);
				pay=pay*80;
				pay=amount-pay;
				cout<<"\nAmount Payable-$"<<pay<<endl;
			}
			else if(sel=='n' || sel=='N'){
				pay=pay+amount;
				cout<<"Amount Payable-$"<<pay<<endl;
			}
			else{
				cout<<"Invalid Entry!!!"<<endl;
			}
			break;
		case 3:
			amount=198;
			cout<<"Does the patient have Medicare/private insurance?(Type y/n)"<<endl;
			cin>>sel;
			if(sel=='y' || sel=='Y'){
				pay=pay+(amount/100.0);
				pay=pay*70;
				pay=amount-pay;
				cout<<"\nAmount Payable-$"<<pay<<endl;
			}
			else if(sel=='n' || sel=='N'){
				pay=pay+amount;
				cout<<"Amount Payable-$"<<pay<<endl;
			}
			else{
				cout<<"Invalid Entry!!!"<<endl;
			}
			break;
		case 4:
			amount=340;
			cout<<"Does the patient have Medicare/private insurance?(Type y/n)"<<endl;
			cin>>sel;
			if(sel=='y' || sel=='Y'){
				pay=pay+(amount/100.0);
				pay=pay*57;
				pay=amount-pay;
				cout<<"\nAmount Payable-$"<<pay<<endl;
			}
			else if(sel=='n' || sel=='N'){
				pay=pay+amount;
				cout<<"Amount Payable-$"<<pay<<endl;
			}
			else{
				cout<<"Invalid Entry!!!"<<endl;
			}
			break;
		default:
			cout<<"Invalid Selection!!!"<<endl;
			break;
	}
	
	Total_Amount=Total_Amount+amount;
	Total_Paid=Total_Paid+pay;
}

void adults(){
	int opt;
	char sel;
	int amount;
	float pay=0.0;
	
	cout<<"Choose Service Level: (type numbers from 1-4 to choose)"<<endl;
	cout<<"1) GP Service \n2) Pathology \n3) Eye-check Up \n4) Dental"<<endl;
	cin>>opt;
	switch(opt){
		case 1:
			amount=88;
			cout<<"Does the patient have Medicare/private insurance?(Type y/n)"<<endl;
			cin>>sel;
			if(sel=='y' || sel=='Y'){
				pay=pay+(amount/100.0);
				pay=pay*90;
				pay=amount-pay;
				cout<<"\nAmount Payable-$"<<pay<<endl;
			}
			else if(sel=='n' || sel=='N'){
				pay=pay+amount;
				cout<<"Amount Payable-$"<<pay<<endl;
			}
			else{
				cout<<"Invalid Entry!!!"<<endl;
			}
			break;
		case 2:
			amount=320;
			cout<<"Does the patient have Medicare/private insurance?(Type y/n)"<<endl;
			cin>>sel;
			if(sel=='y' || sel=='Y'){
				pay=pay+(amount/100.0);
				pay=pay*81;
				pay=amount-pay;
				cout<<"\nAmount Payable-$"<<pay<<endl;
			}
			else if(sel=='n' || sel=='N'){
				pay=pay+amount;
				cout<<"Amount Payable-$"<<pay<<endl;
			}
			else{
				cout<<"Invalid Entry!!!"<<endl;
			}
			break;
		case 3:
			amount=212;
			cout<<"Does the patient have Medicare/private insurance?(Type y/n)"<<endl;
			cin>>sel;
			if(sel=='y' || sel=='Y'){
				pay=pay+(amount/100.0);
				pay=pay*87;
				pay=amount-pay;
				cout<<"\nAmount Payable-$"<<pay<<endl;
			}
			else if(sel=='n' || sel=='N'){
				pay=pay+amount;
				cout<<"Amount Payable-$"<<pay<<endl;
			}
			else{
				cout<<"Invalid Entry!!!"<<endl;
			}
			break;
		case 4:
			amount=318;
			cout<<"Does the patient have Medicare/private insurance?(Type y/n)"<<endl;
			cin>>sel;
			if(sel=='y' || sel=='Y'){
				pay=pay+(amount/100.0);
				pay=pay*66;
				pay=amount-pay;
				cout<<"\nAmount Payable-$"<<pay<<endl;
			}
			else if(sel=='n' || sel=='N'){
				pay=pay+amount;
				cout<<"Amount Payable-$"<<pay<<endl;
			}
			else{
				cout<<"Invalid Entry!!!"<<endl;
			}
			break;
		default:
			cout<<"Invalid Selection!!!"<<endl;
			break;
	}
	
	Total_Amount=Total_Amount+amount;
	Total_Paid=Total_Paid+pay;
}

void pensioner(){
	int opt;
	char sel;
	int amount;
	float pay=0.0;
	
	cout<<"Choose Service Level: (type numbers from 1-4 to choose)"<<endl;
	cout<<"1) GP Service \n2) Pathology \n3) Eye-check Up \n4) Dental"<<endl;
	cin>>opt;
	switch(opt){
		case 1:
			amount=71;
			cout<<"Does the patient have Medicare/private insurance?(Type y/n)"<<endl;
			cin>>sel;
			if(sel=='y' || sel=='Y'){
				pay=pay+(amount/100.0);
				pay=pay*95;
				pay=amount-pay;
				cout<<"\nAmount Payable-$"<<pay<<endl;
			}
			else if(sel=='n' || sel=='N'){
				pay=pay+amount;
				cout<<"Amount Payable-$"<<pay<<endl;
			}
			else{
				cout<<"Invalid Entry!!!"<<endl;
			}
			break;
		case 2:
			amount=250;
			cout<<"Does the patient have Medicare/private insurance?(Type y/n)"<<endl;
			cin>>sel;
			if(sel=='y' || sel=='Y'){
				pay=pay+(amount/100.0);
				pay=pay*80;
				pay=amount-pay;
				cout<<"\nAmount Payable-$"<<pay<<endl;
			}
			else if(sel=='n' || sel=='N'){
				pay=pay+amount;
				cout<<"Amount Payable-$"<<pay<<endl;
			}
			else{
				cout<<"Invalid Entry!!!"<<endl;
			}
			break;
		case 3:
			amount=250;
			cout<<"Does the patient have Medicare/private insurance?(Type y/n)"<<endl;
			cin>>sel;
			if(sel=='y' || sel=='Y'){
				pay=pay+(amount/100.0);
				pay=pay*95;
				pay=amount-pay;
				cout<<"\nAmount Payable-$"<<pay<<endl;
			}
			else if(sel=='n' || sel=='N'){
				pay=pay+amount;
				cout<<"Amount Payable-$"<<pay<<endl;
			}
			else{
				cout<<"Invalid Entry!!!"<<endl;
			}
			break;
		case 4:
			amount=250;
			cout<<"Does the patient have Medicare/private insurance?(Type y/n)"<<endl;
			cin>>sel;
			if(sel=='y' || sel=='Y'){
				pay=pay+(amount/100.0);
				pay=pay*85;
				pay=amount-pay;
				cout<<"\nAmount Payable-$"<<pay<<endl;
			}
			else if(sel=='n' || sel=='N'){
				pay=pay+amount;
				cout<<"Amount Payable-$"<<pay<<endl;
			}
			else{
				cout<<"Invalid Entry!!!"<<endl;
			}
			break;
		default:
			cout<<"Invalid Selection!!!"<<endl;
			break;
	}
	
	Total_Amount=Total_Amount+amount;
	Total_Paid=Total_Paid+pay;
}

void TotalBill(){
	cout<<"Total amount of service for today\t\t-$"<<Total_Amount<<endl;
	cout<<"Total amount collected from patients\t\t-$"<<Total_Paid<<endl;
}