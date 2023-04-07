#include "Bat.cpp"
#include "Ball.cpp"
#include "WK.cpp"
#include "AR.cpp"

int main(){
	Batsmen bat(5, "Ahmad", 5, 9, 16, "Left", 5, 4434, 45.7, 89.5);
	Bowler bowl(7, "Abdullah", 8, 17, 6, "Spin", 89.6, 54, 23.7, 56.9);
	WicketKeeper wk(6, "Haris", 9, 23, 12, "Right", 2305, 43, 35);
	AllRounder ar(3, "Zeeshan", 2, 5, 7, "Left", 5, 2654, 39.5, 95.7, "Spin", 83.7, 47, 28.3, 63.9);
	
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
	cout << "Please Select from the following option: ";
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