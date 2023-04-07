#include "Bat.cpp"
#include "Ball.cpp"
#include "WK.cpp"
#include "AR.cpp"

int main(){
	Batsmen bat;
	Bowler bowl;
	WicketKeeper wk;
	AllRounder ar;
	
	int option;
	char again;
	
	cout << "-------------------------------------" << endl << endl;
	cout << "\tCricket Simulation" << endl << endl;
	cout << "-------------------------------------" << endl << endl;
	do{
	cout << "--------------------------" << endl << endl;
	cout << "\tMenu" << endl << endl;
	cout << "--------------------------" << endl << endl;
	cout << "1. Add Batsman \n2. Batting Approach \n3. Add Bowler \n4. Bowler Approach \n5. Add WicketKeeper \n6. WicketKeeper Approach ";
	cout << "\n7. Add All-Rounder \n8. All-Rounder Approach \n9. Display Batsman \n10. Display Bowler \n11. Display WicketKeeper ";
	cout << "\n12. Display All-Rounder \n13. Exit " <<endl;
	cin >> option;
	switch(option){
		case 1:			
			bat.BatgetInfo();
			break;
		case 2:
			bat.BattingApproach();
			break;
		case 3:			
			bowl.BowlgetInfo();
			break;
		case 4:
			bowl.BowlerApproach();
			break;
		case 5:
			wk.getInfo();
			break;
		case 6:
			wk.Approach();
			break;
		case 7:
			ar.getInfo();
			break;
		case 8:
			ar.Approach();
			break;
		case 9:
			bat.dispBat();
			break;
		case 10:
			bowl.dispBowl();
			break;
		case 11:
			wk.dispWK();
			break;
		case 12:
			ar.dispAR();
			break;
		case 13:
			cout << "Thank You For Using!!!" << endl;
			break;
		default:
			cout << "Invalid Entry!!!" << endl;
			break;
		}
	cout << "Do you want to use again (Y/N)?";
	cin >> again;
	}
	while(again == 'y' || again == 'Y');
	
	return 0;
}