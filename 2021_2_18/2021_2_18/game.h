#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//游戏的声明 
#define ROW 5
#define COL 5

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);
//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);
//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col);
//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col);
//判断输赢    电脑赢了 -#  玩家赢了-*  平局-q  继续-c
char CheckWin(char board[ROW][COL], int row, int col);