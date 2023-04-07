#include "Batsmen.h"

	Batsmen::Batsmen(): battingStyle("\0"), battingNo(0), totalScore(0), average(0.0), BatstrikeRate(0.0)
	{
	}
	Batsmen::Batsmen(int jerseyNo, string name, int ranking, string battingStyle, int battingNo, int totalScore, float average, float BatstrikeRate)
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
	}
	void Batsmen::BatgetInfo(){
			cout << "Enter Jersey Number: ";
			cin >> jerseyNo;
			cout << "Enter Name: ";
			cin.ignore();
			getline(cin, name);
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
			cout << "Enter Average: ";
			cin >> average;
			cout << "Enter Strike Rate: ";
			cin >> BatstrikeRate;
		}
		
		void Batsmen::BattingApproach(){
			cout << "Hit the Ball!!!" << endl;
			cout << "Batsmen is running!!!" << endl;
		}
		
		void Batsmen::dispBat(){
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
			cout << "Strike Rate: " << BatstrikeRate << endl;
		}
