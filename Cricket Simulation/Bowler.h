#ifndef BOWLER_H
#define BOWLER_H

#include "Player.h"

class Bowler: virtual public Player{
	protected:
		string bowlingStyle;
		float aveSpeed;
		int totalWickets;
		float bowlingAverage;
		float strikeRate;
	public:
		
		Bowler();
		
		Bowler(int jerseyNo, string name, int Test, int ODI, int T20, string bowlingStyle, float aveSpeed, int totalWickets, float bowlingAverage, float strikeRate);
		
		void BowlgetInfo();
		
		void BowlerApproach();
		
		void dispBowl();
};

#endif