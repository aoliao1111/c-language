#define _CRT_SECURE_NO_WARNINGS
#include"game.h"


void Initboard(char board[ROWS][COLS], int row, int col,char set )      //��ʼ������
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] =set;
		}
	}
}


void Printboard(char board[ROWS][COLS], int row, int col)               //��ӡ����
{
	printf("-----ɨ����Ϸ----\n");
	int i = 0;
	int j = 0;
	for (j = 0; j <= col; j++)
	{
		printf(" %d ", j);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf(" %d " , i );
		for (j = 1; j <= col; j++)
		{
			
			printf(" %c ",board[i][j]);
		}
		printf("\n");
	}
}

void Setboard(char board[ROWS][COLS], int row, int col)                //������
{
	int count = 10;
	
	while(count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;		
		}
	}


}


void Findboard(char board_1[ROWS][COLS], char board_2[ROWS][COLS], int row, int col)            //�Ų���
{

	int x = 0;
	int y = 0;

	while (1)
	{
		
		printf("��������Ҫ���ҵ����꣺");
		scanf("%d %d", &x, &y);
		if (x>=1 && x<=row && y>=1 && y<=col)
		{
			if (board_1[x][y] == '0')
			{
				int find_mine = NumMine(board_1, x, y);
				board_2[x][y] = find_mine + '0';
				Printboard(board_2, ROW, COL);
			}
			else
			{
				printf("����ʧ�ܣ�ը��\n");
				Printboard(board_1,ROW,COL);
				break;
			}
		}
		else
		{
			printf("��������겻����ʹ��\n");
		}
	}
}


int NumMine(char board[ROWS][COLS], int x, int y)
{
	int i = 0;
	int j = 0;
	int find_num = 0;
	for (i = -1; i <= 1; i++)
	{
		for (j = -1; j <= 1; j++)
		{
			find_num += board[x+i][y+j] - '0';
		}
	}
	return find_num;
}


void game()
{



	char mine[ROWS][COLS] = {0};                 //11��11�У����׵�����
	char show[ROW][COL] = { 0 };                 //9��9�У�չʾ������������
	Initboard(mine, ROWS, COLS,'0');                 //��ʼ�����׵�����
	Initboard(show, ROWS, COLS,'*');                 //��ʼ�����������������
	Setboard(mine,ROW,COL);               //������
	//Printboard(mine, ROW, COL);                //��ӡ�������׵�����
	
	Printboard(show,ROW,COL);                //��ӡ����
	Findboard(mine,show,ROW,COL);   //������

}