#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW  9
#define COL  9
#define ROW1  ROW+2
#define COL1  COL+2
#define  EASY  80

//初始化
void Initboard(char board[ROW1][COL1], int row1,int col1,char set);
//显示
void ShowBoard(char board[ROW1][COL1], int row, int col);
//布雷
void SetMine(char mine[ROW1][COL1],int row,int col,int count);
//排雷
void FineMine(char mine[ROW1][COL1],char show[ROW1][COL1],int row, int col);
