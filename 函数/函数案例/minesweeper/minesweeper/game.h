#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>



#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 10;






void menu();                                   //打印菜单
void game();                                   //开始游戏

void Initboard(char board[ROWS][COLS], int row, int col);                 //初始化包含雷的棋盘

void Printboard(char board[ROWS][COLS], int row, int col);         //打印棋盘


void Setboard(char board[ROWS][COLS], int row, int col);        //设置雷

void Findboard(char board_1, char board_2, int row, int col);     //排查雷





