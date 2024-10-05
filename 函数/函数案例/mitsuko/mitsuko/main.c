#define _CRT_SECURE_NO_WARNINGS
#include"mitsuko.h"



void menu()                                                   //打印菜单
{
	printf("*********************************\n");
	printf("***************三子棋************\n");
	printf("********1.开始游戏  2.退出*******\n");
}



void main()
{

	srand((unsigned int)time(NULL));
	int input =0;
	do {
		menu();
		printf("请选择游戏：");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				game();
				break;
			case2:
				printf("退出\n");
				break;

			default:
				printf("选择错误\n");
				break;
		}

	} while (input);
	


	return 0;
}