#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>



#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 10;






void menu();                                   //��ӡ�˵�
void game();                                   //��ʼ��Ϸ

void Initboard(char board[ROWS][COLS], int row, int col);                 //��ʼ�������׵�����

void Printboard(char board[ROWS][COLS], int row, int col);         //��ӡ����


void Setboard(char board[ROWS][COLS], int row, int col);        //������

void Findboard(char board_1, char board_2, int row, int col);     //�Ų���





