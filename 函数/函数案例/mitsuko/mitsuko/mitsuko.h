#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define ROW 3
#define COL 3

//打印菜单
void menu();

//初始化棋盘
void InitBoard(char board, int row, int col);          

//打印棋盘
void Display(char board, int row, int col);    

//玩家下棋
void playmove(char board[ROW][COL], int row, int col);  

//电脑下棋
void computermove(char board[ROW][COL], int row, int col);

//判断是否胜利
char whetherwin(char board[ROW][COL], int row, int col);

//判断是否为平局
char is_full(char board[ROW][COL], int row, int col);




















void game();
