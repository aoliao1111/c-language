#define _CRT_SECURE_NO_WARNINGS
#include"game.h"


void Initboard(char board[ROWS][COLS], int row, int col,char set )      //初始化棋盘
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


void Printboard(char board[ROWS][COLS], int row, int col)               //打印棋盘
{
	printf("-----扫雷游戏----\n");
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

void Setboard(char board[ROWS][COLS], int row, int col)                //设置雷
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


void Findboard(char board_1[ROWS][COLS], char board_2[ROWS][COLS], int row, int col)            //排查雷
{

	int x = 0;
	int y = 0;

	while (1)
	{
		
		printf("请输入你要查找的坐标：");
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
				printf("排雷失败，炸死\n");
				Printboard(board_1,ROW,COL);
				break;
			}
		}
		else
		{
			printf("输入的坐标不可以使用\n");
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



	char mine[ROWS][COLS] = {0};                 //11行11列，含雷的棋盘
	char show[ROW][COL] = { 0 };                 //9行9列，展示雷数量的棋盘
	Initboard(mine, ROWS, COLS,'0');                 //初始化含雷的棋盘
	Initboard(show, ROWS, COLS,'*');                 //初始化输出雷数量的棋盘
	Setboard(mine,ROW,COL);               //设置雷
	//Printboard(mine, ROW, COL);                //打印设置了雷的棋盘
	
	Printboard(show,ROW,COL);                //打印棋盘
	Findboard(mine,show,ROW,COL);   //查找雷

}