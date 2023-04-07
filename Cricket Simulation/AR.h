#ifndef AR_H
#define AR_H

#include "Batsmen.h"
#include "Bowler.h"

class AllRounder: public Batsmen, public Bowler{
	public:
		AllRounder();
		
		AllRounder(int jerseyNo, string name, int Test, int ODI, int T20, string battingStyle, int battingNo, int totalScore, float average, float BatstrikeRate, string bowlingStyle, float aveSpeed, int totalWickets, float bowlingAverage, float strikeRate);
		
		void getInfo();
		
		void Approach();
		
		void dispAR();
};

#endif