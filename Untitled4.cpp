#include <iostream>
using namespace std;

const int sec_per_day = 86400;
const int sec_per_hour = 3600;
const int sec_per_min = 60;

void convertSec(int sec)
{
	cout << "\n============Converting Seconds into Days, Hours and Minutes============"<<endl<<endl;
	
	int temp = sec;
	
	float day = sec / sec_per_day;

	sec = sec % sec_per_day;
	float hour = sec / sec_per_hour;

	sec = sec % sec_per_hour;
	float minutes = sec / sec_per_min ;

	sec= sec % sec_per_min;
	float seconds = sec;
	
	cout << "\n";
	cout << temp <<" Seconds = ";
	cout << "(" << day << ")" << " " << "Days : ";
	cout << "(" << hour << ")" << " " << "Hours : ";
	cout << "(" << minutes << ")" << " " << "Minutes : ";
	cout << "(" << seconds << ")" << " " << "Seconds " << endl;
}

int main()
{
	int sec;
	cout << "Please Enter Number of Seconds : " ;
	cin >> sec ;
	convertSec(sec);
	return 0;
}
