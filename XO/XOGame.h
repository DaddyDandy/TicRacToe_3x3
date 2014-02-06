#include <iostream>
#include "stdafx.h"

using namespace std;

class Game
{
private:
	bool isXorOmatr[3][3];
	int playerr;
	int strokes;
public:
	int gameField[3][3];
	bool Steps(int,int);
	void Gaming(int,int);
	int WhoWin();
	void ClearField();
	void NPC();
};