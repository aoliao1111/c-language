#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void menu()
{
	printf("****************************\n");
	printf("************ɨ��************\n");
	printf("********1.��Ϸ 0.�˳�*******\n");
	printf("****************************\n");

}

int main()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��ʼ��Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳�\n");
		default:
			printf("ѡ�����\n");
			break;
		}

	} while (input);







	return 0;

}




