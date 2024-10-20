#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void menu()
{
	printf("****************************\n");
	printf("************扫雷************\n");
	printf("********1.游戏 0.退出*******\n");
	printf("****************************\n");

}

int main()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("开始游戏\n");
			game();
			break;
		case 0:
			printf("退出\n");
		default:
			printf("选择错误\n");
			break;
		}

	} while (input);







	return 0;

}




