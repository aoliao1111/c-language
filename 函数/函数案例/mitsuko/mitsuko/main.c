#define _CRT_SECURE_NO_WARNINGS
#include"mitsuko.h"



void menu()                                                   //��ӡ�˵�
{
	printf("*********************************\n");
	printf("***************������************\n");
	printf("********1.��ʼ��Ϸ  2.�˳�*******\n");
}



void main()
{

	srand((unsigned int)time(NULL));
	int input =0;
	do {
		menu();
		printf("��ѡ����Ϸ��");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				game();
				break;
			case2:
				printf("�˳�\n");
				break;

			default:
				printf("ѡ�����\n");
				break;
		}

	} while (input);
	


	return 0;
}