#include "WK.h"		
		
		WicketKeeper::WicketKeeper(): battingStyle("\0"), totalCatches(0), totalStumps(0)
		{
			
		}
		
		WicketKeeper::WicketKeeper(int jerseyNo, string name, int ranking, string battingStyle, int totalCatches, int totalStumps){
			this->jerseyNo=jerseyNo;
			this->name=name;
			for(int i = 0; i<3; i++){
			this->ranking[i]=ranking;
			}
			this->battingStyle=battingStyle;
			this->totalCatches=totalCatches;
			this->totalStumps=totalStumps;
		}
		
		void WicketKeeper::getInfo(){
			cout << "Enter Jersey Number: ";
			cin >> jerseyNo;
			cout << "Enter Name: ";
			cin >> name;
			for(int i=0; i<3; i++){
			if(i<1){
				cout << "Enter Test Rankings: ";
				cin >> ranking[i];
			}
			else if(i<2){
				cout << "Enter ODI Rankings: ";
				cin >> ranking[i];
			}
			else{
				cout << "Enter T20I Rankings: ";
				cin>> ranking[i];
			}				
			}
			cout << "Enter Batting Style (Left/Right): ";
			cin >> battingStyle;
			cout << "Enter Total Catches: ";
			cin >> totalCatches;
			cout << "Enter Total Stumps: ";
			cin >> totalStumps;
		}
		
		void WicketKeeper::Approach(){
			cout << "Keeper is catching the ball!!!" << endl;
			cout << "Keeper is stumping!!!" << endl;
		}
		
		void WicketKeeper::dispWK(){
			cout << "Jersey Numer: " << jerseyNo << endl;
			cout << "Batsmen's Name: " << 
			name << endl;
			for(int i=0; i<3; i++){
			if(i<1){
				cout << "Test Rankings: "<< ranking[i] << endl;
			}
			else if(i<2){
				cout << "ODI Rankings: "<< ranking[i] << endl;
			}
			else{
				cout << "T20I Rankings: "<< ranking[i] << endl;
			}				
			}
			cout << "Batting Style: " << battingStyle << endl;
			cout << "Total Catches: " << totalCatches << endl;
			cout << "Total Stumps: " << totalStumps << endl;
		}
