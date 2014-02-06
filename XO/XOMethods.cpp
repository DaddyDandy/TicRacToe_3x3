#include "StdAfx.h"
#include "XOGame.h"
#include <time.h>

void Game::Gaming(int numberOfButton1, int numberOfButton2){
		 if(strokes % 2 == 0) playerr = 1;
		 if(strokes % 2 != 0) playerr = 2;
		 gameField[numberOfButton1][numberOfButton2] = playerr;
		 isXorOmatr[numberOfButton1][numberOfButton2] = false;
		 strokes++;
	 }

int Game::WhoWin()
{
		 if ((gameField[0][0] == 1 && gameField[0][1] == 1 && gameField[0][2] == 1) || (gameField[0][0] == 1 && gameField[1][1] == 1 && gameField[2][2] == 1) || (gameField[0][0] == 1 && gameField[1][0] == 1 && gameField[2][0] == 1) || (gameField[0][1] == 1 && gameField[1][1] == 1 && gameField[2][1] == 1) || (gameField[1][0] == 1 && gameField[1][1] == 1 && gameField[1][2] == 1) || (gameField[0][2] == 1 && gameField[1][1] == 1 && gameField[2][0] == 1) || (gameField[0][2] == 1 && gameField[1][2] == 1 && gameField[2][2] == 1) || (gameField[2][0] == 1 && gameField[2][1] == 1 && gameField[2][2] == 1))
		 { //побеждает Х 
			 ClearField();
			 return 1;
		 }

		 if ((gameField[0][0] == 2 && gameField[0][1] == 2 && gameField[0][2] == 2) || (gameField[0][0] == 2 && gameField[1][1] == 2 && gameField[2][2] == 2) || (gameField[0][0] == 2 && gameField[1][0] == 2 && gameField[2][0] == 2) || (gameField[0][1] == 2 && gameField[1][1] == 2 && gameField[2][1] == 2) || (gameField[1][0] == 2 && gameField[1][1] == 2 && gameField[1][2] == 2) || (gameField[0][2] == 2 && gameField[1][1] == 2 && gameField[2][0] == 2) || (gameField[0][2] == 2 && gameField[1][2] == 2 && gameField[2][2] == 2) || (gameField[2][0] == 2 && gameField[2][1] == 2 && gameField[2][2] == 2))
		 {//побеждает О               
			 ClearField();
			 return 2;
		 }
		 if ((gameField[0][0] != 0) && (gameField[0][1] != 0) && (gameField[0][2] != 0) && (gameField[1][0] != 0) && (gameField[1][1] != 0) && (gameField[1][2] != 0) && (gameField[2][0] != 0) && (gameField[2][1] != 0) && (gameField[2][2] != 0))
		 {// Ничья
			 ClearField();
			 return 3;
		 }         
}

void Game::ClearField(){
		 for (int i = 0; i < 3; ++i)
			 for(int j = 0; j < 3; ++j)
		 { gameField[i][j] = 0; isXorOmatr[i][j] = true;}
		 strokes = 2;
}

bool Game::Steps(int numberOfButton1,int numberOfButton2){
	return isXorOmatr[numberOfButton1][numberOfButton2];
}

void Game::NPC()
{
	bool canDo = true;
	if(strokes%2 != 0 && strokes != 11)
	{
		while(canDo)
		{	

			srand(time(NULL));
			int randomLine = rand()%4;
			int randomRow = rand()%4;
			if(isXorOmatr[randomLine][randomRow] != false)
			{
				isXorOmatr[randomLine][randomRow] = false;
				gameField[randomLine][randomRow] = 2;
				canDo = false;
				strokes++;
			}
			else if(isXorOmatr[randomRow][randomLine] != false)
			{
				isXorOmatr[randomRow][randomLine] = false;
				gameField[randomRow][randomLine] = 2;
				canDo = false;
				strokes++;
			}	
		}
	}
}