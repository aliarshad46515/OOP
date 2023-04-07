#include "AR.h"		
		
		AllRounder::AllRounder()
		{
		}
		AllRounder::AllRounder(int jerseyNo, string name, int ranking, string battingStyle, int battingNo, int totalScore, float average, float BatstrikeRate, string bowlingStyle, float aveSpeed, int totalWickets, float bowlingAverage, float strikeRate)
		{
			this->jerseyNo=jerseyNo;
			this->name=name;
			for(int i = 0; i<3; i++){
				this->ranking[i]=ranking;
			}
			this->battingStyle=battingStyle;
			this->battingNo=battingNo;
			this->totalScore=totalScore;
			this->average=average;
			this->BatstrikeRate=BatstrikeRate;
			this->bowlingStyle=bowlingStyle;
			this->aveSpeed=aveSpeed;
			this->totalWickets=totalWickets;
			this->bowlingAverage=bowlingAverage;
			this->strikeRate=strikeRate;
		}
		void AllRounder::getInfo(){
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
			cout << "Batting Style (Left/Right): ";
			cin >> battingStyle;
			cout << "Enter Batting No: ";
			cin >> battingNo;
			cout << "Enter Total Score: ";
			cin >> totalScore;
			cout << "Enter Batting Average: ";
			cin >> average;
			cout << "Enter Strike Rate: ";
			cin >> BatstrikeRate;
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
		
		void AllRounder::Approach(){
			BowlerApproach();
			BattingApproach();
		}
		
		void AllRounder::dispAR(){
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
			cout << "Batting Style: " << battingStyle << endl;
			cout << "Batting Number: " << battingNo << endl;
			cout << "Total Score: " << totalScore << endl;
			cout << "Batting Average: " << average << endl;
			cout << "Batting Strike Rate: " << BatstrikeRate << endl;
			cout << "Bowling Style: " << bowlingStyle << endl;
			cout << "Bowling Speed: " << aveSpeed << endl;
			cout << "Total Wickets: " << totalWickets << endl;
			cout << "Bowling Average: " << bowlingAverage << endl;
			cout << "Bowling Strike Rate: " << strikeRate << endl;
		}