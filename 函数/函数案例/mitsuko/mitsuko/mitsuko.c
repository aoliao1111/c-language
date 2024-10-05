#define _CRT_SECURE_NO_WARNINGS
#include"mitsuko.h"
#define ROW 3
#define COL 3

void InitBoard(char board[ROW][COL], int row, int col)		//初始化棋盘
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';              //通过对二维数组下标的索引，将二维数组每一个元素定义为空格。
		}
	}
}


void Display(char board[ROW][COL], int row, int col)             //打印棋盘
{
	int i = 0;
	
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
			
		{
			
			printf(" %c ",board[i][j]);            //将定义的二维数组每一个元素打印下来
			if (j < col-1)
				printf("|");                       //打印完一个元素后，打印一个|用来分割下一个元素
			
		}
		printf("\n");
		if (i < row - 1)
		{
			int j = 0;
			for (j = 0;j<col;j++)
			{
				printf("___");                    //打印完第一行后，用于分割下一行
				if (j < col - 1)
					printf("|");                  //每三个行分隔符接着是列分隔符
			}
			printf("\n");
		 }
	}
}

void playmove(char board[ROW][COL], int row,int col)                                //玩家下棋
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("输入下棋地址：\n");
		scanf("%d %d", &x, &y);
		if(x>0 &&x<row+1 && y>0 &&y<col+1)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("已有内容；\n");
			}
		}
		else
		{
			printf("不属于棋盘。\n");
		}
	}
	
}

void computermove(char board[ROW][COL],int row,int col)
{
	int x = 0;
	int y = 0;
	x = rand() % row;
	y = rand() % col;
	while (1)
	{
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
	printf("电脑下棋：\n");
}

char is_full(char board[ROW][COL], int row,int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] ==' ')   //数组全部有元素，返回1，
			{
				return 0;
			}
			
		}
	}
	return 1;
}

char whetherwin(char board[ROW][COL], int row, int col)
{
	char win = 0;
	int i = 0;
	int j = 0;
	//首先判断行
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];

		}
		else
		{
			break;
		}
	}

	//然后判断列
	for (j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j]&&board[1][j] !=' ')
		{
			return board[0][j];
		}
	}

	//最后判断对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')

	{
		return board[0][0];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
	{
		return board[2][0];
	}
	if (is_full(board, ROW, COL))
	{

		return 'q';
	}
	return 'c';

}


void game()
{

	char win = 0;
	char board[ROW][COL] = { 0 };
	char ret = 0;
	InitBoard(board,ROW,COL);//初始化棋盘
	Display(board,ROW,COL);//打印棋盘
	while (1)
	{
		playmove(board, ROW, COL);
		Display(board, ROW, COL);//打印棋盘
		ret = whetherwin(board,ROW,COL);
		if (ret != 'c')
		{
			break;
		}
		
		computermove(board, ROW, COL);
		Display(board, ROW, COL);//打印棋盘
		ret = whetherwin(board, ROW, COL);
		///返回“#”代表着电脑赢
		/// 返回“*”代表着玩家赢
		/// 返回“q”代表着平局
		/// 返回“c”代表着继续游戏
			///
		if (ret != 'c')
		{
			break;
		}
		

	}
	if (ret == ' # ')
	{
		printf("电脑赢\n");
	
		}
	else if (ret = ' * ')
	{
		printf("玩家获胜\n");
	
		}
	else
	{
		printf("平局\n");
		
		}
	Display(board, ROW, COL);

}