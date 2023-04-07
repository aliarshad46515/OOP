#include "Bowler.h"	
	
	Bowler::Bowler(): bowlingStyle("\0"), aveSpeed(0), totalWickets(0), bowlingAverage(0.0), strikeRate(0.0)
	{
	}
	Bowler::Bowler(int jerseyNo, string name, int ranking, string bowlingStyle, float aveSpeed, int totalWickets, float bowlingAverage, float strikeRate)
	{
		this->jerseyNo=jerseyNo;
		this->name=name;
		for(int i = 0; i<3; i++){
			this->ranking[i]=ranking;
		}
		this->bowlingStyle=bowlingStyle;
		this->aveSpeed=aveSpeed;
		this->totalWickets=totalWickets;
		this->bowlingAverage=bowlingAverage;
		this->strikeRate=strikeRate;
	}
	
	void Bowler::BowlgetInfo(){
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
			cout << "Enter Bowling Style (Fast/Spin): ";
			cin >> bowlingStyle;
			cout << "Enter Average Speed: ";
			cin >> aveSpeed;
			cout << "Enter Total Wickets: ";
			cin >> totalWickets;
			cout << "Enter Bowling Average: ";
			cin >> bowlingAverage;
			cout << "Enter Bowling Strike Rate: ";
			cin >> strikeRate;
		}
		
		void Bowler::BowlerApproach(){
			cout << "Bowler is bowling!!!" << endl;
			cout << "Bowler is changing side!!!" << endl;
		}
		
		void Bowler::dispBowl(){
			cout << "Jersey Numer: " << jerseyNo << endl;
			cout << "Batsmen's Name: " << name << endl;
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
			cout << "Bowling Style: " << bowlingStyle << endl;
			cout << "Bowling Speed: " << aveSpeed << endl;
			cout << "Total Wickets: " << totalWickets << endl;
			cout << "Bowling Average: " << bowlingAverage << endl;
			cout << "Bowling Strike Rate: " << strikeRate << endl;
		}
