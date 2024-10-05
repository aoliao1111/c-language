#define _CRT_SECURE_NO_WARNINGS
#include"mitsuko.h"
#define ROW 3
#define COL 3

void InitBoard(char board[ROW][COL], int row, int col)		//��ʼ������
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';              //ͨ���Զ�ά�����±������������ά����ÿһ��Ԫ�ض���Ϊ�ո�
		}
	}
}


void Display(char board[ROW][COL], int row, int col)             //��ӡ����
{
	int i = 0;
	
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
			
		{
			
			printf(" %c ",board[i][j]);            //������Ķ�ά����ÿһ��Ԫ�ش�ӡ����
			if (j < col-1)
				printf("|");                       //��ӡ��һ��Ԫ�غ󣬴�ӡһ��|�����ָ���һ��Ԫ��
			
		}
		printf("\n");
		if (i < row - 1)
		{
			int j = 0;
			for (j = 0;j<col;j++)
			{
				printf("___");                    //��ӡ���һ�к����ڷָ���һ��
				if (j < col - 1)
					printf("|");                  //ÿ�����зָ����������зָ���
			}
			printf("\n");
		 }
	}
}

void playmove(char board[ROW][COL], int row,int col)                                //�������
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("���������ַ��\n");
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
				printf("�������ݣ�\n");
			}
		}
		else
		{
			printf("���������̡�\n");
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
	printf("�������壺\n");
}

char is_full(char board[ROW][COL], int row,int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] ==' ')   //����ȫ����Ԫ�أ�����1��
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
	//�����ж���
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

	//Ȼ���ж���
	for (j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j]&&board[1][j] !=' ')
		{
			return board[0][j];
		}
	}

	//����ж϶Խ���
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
	InitBoard(board,ROW,COL);//��ʼ������
	Display(board,ROW,COL);//��ӡ����
	while (1)
	{
		playmove(board, ROW, COL);
		Display(board, ROW, COL);//��ӡ����
		ret = whetherwin(board,ROW,COL);
		if (ret != 'c')
		{
			break;
		}
		
		computermove(board, ROW, COL);
		Display(board, ROW, COL);//��ӡ����
		ret = whetherwin(board, ROW, COL);
		///���ء�#�������ŵ���Ӯ
		/// ���ء�*�����������Ӯ
		/// ���ء�q��������ƽ��
		/// ���ء�c�������ż�����Ϸ
			///
		if (ret != 'c')
		{
			break;
		}
		

	}
	if (ret == ' # ')
	{
		printf("����Ӯ\n");
	
		}
	else if (ret = ' * ')
	{
		printf("��һ�ʤ\n");
	
		}
	else
	{
		printf("ƽ��\n");
		
		}
	Display(board, ROW, COL);

}