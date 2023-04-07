#ifndef WK_H
#define WK_H

#include "Player.h"

class WicketKeeper: public Player{
	private:
		string battingStyle;
		int totalScore;
		int totalCatches;
		int totalStumps;
	public:
		WicketKeeper();
		
		WicketKeeper(int jerseyNo, string name, int ranking, string battingStyle, int totalCatches, int totalStumps);
		
		void getInfo();
		
		void Approach();
		
		void dispWK();
};

#endif