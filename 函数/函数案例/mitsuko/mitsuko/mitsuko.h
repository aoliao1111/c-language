#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define ROW 3
#define COL 3

//��ӡ�˵�
void menu();

//��ʼ������
void InitBoard(char board, int row, int col);          

//��ӡ����
void Display(char board, int row, int col);    

//�������
void playmove(char board[ROW][COL], int row, int col);  

//��������
void computermove(char board[ROW][COL], int row, int col);

//�ж��Ƿ�ʤ��
char whetherwin(char board[ROW][COL], int row, int col);

//�ж��Ƿ�Ϊƽ��
char is_full(char board[ROW][COL], int row, int col);




















void game();
