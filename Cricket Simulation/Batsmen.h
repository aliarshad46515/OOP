#ifndef BATSMEN_H
#define BATSMEN_H

#include "Player.h"

class Batsmen: virtual public Player{
	protected:
		string battingStyle;
		int battingNo;
		int totalScore;
		float average;
		float BatstrikeRate;
	public:
		Batsmen();
		
		Batsmen(int jerseyNo, string name, int ranking, string battingStyle, int battingNo, int totalScore, float average, float BatstrikeRate);
		
		void BatgetInfo();
		
		void BattingApproach();
		
		void dispBat();
};

#endif