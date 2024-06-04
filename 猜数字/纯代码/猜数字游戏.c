#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void add()
{
	
	printf("******************************\n");
	printf("***********1.开始游戏*********\n");
	printf("***********0.退出游戏*********\n");
	printf("******************************\n");
	

}
void game()

{
	int gass = 0;
	
	int ret = rand()%100 + 1;//生成一个随机数，但是需要先调用srand，srand作为rand的生成器
	while (1)
	{
		printf("请输入你要猜的数字：");
		scanf("%d", &gass);
		if (gass < ret)
		{
			printf("猜小了\n");
			
			
		}
		else if (gass > ret)
		{
			printf("猜大了\n");
		
		}
		else
		{
			printf("猜对了\n");
			break;

		}

	}
}


int main()
{
	int a = 0;
	
	 srand((unsigned int)time(NULL));
	
	do
	{
		add();
		printf("请选择：");
		scanf("%d", &a);
	
		switch(a)
		{
		case 1:
			printf("游戏开始\n");
			game();
			break;

		case 0:
			printf("退出游戏\n");
			break;

		default:
			printf("输入错误！\n");
			break;
		}
	} while (a);





	return 0;
}