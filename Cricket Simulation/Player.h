#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>

using namespace std;

class Player{
	protected:
		int jerseyNo;
		string name;
		int ranking[3];
	public:
		Player()
		{
			jerseyNo = 0;
			name = "\0";
			for(int i = 0; i<3; i++){
				ranking[i]=0;
			}
		}
};

#endif