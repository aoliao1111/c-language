#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void add()
{
	
	printf("******************************\n");
	printf("***********1.��ʼ��Ϸ*********\n");
	printf("***********0.�˳���Ϸ*********\n");
	printf("******************************\n");
	

}
void game()

{
	int gass = 0;
	
	int ret = rand()%100 + 1;//����һ���������������Ҫ�ȵ���srand��srand��Ϊrand��������
	while (1)
	{
		printf("��������Ҫ�µ����֣�");
		scanf("%d", &gass);
		if (gass < ret)
		{
			printf("��С��\n");
			
			
		}
		else if (gass > ret)
		{
			printf("�´���\n");
		
		}
		else
		{
			printf("�¶���\n");
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
		printf("��ѡ��");
		scanf("%d", &a);
	
		switch(a)
		{
		case 1:
			printf("��Ϸ��ʼ\n");
			game();
			break;

		case 0:
			printf("�˳���Ϸ\n");
			break;

		default:
			printf("�������\n");
			break;
		}
	} while (a);





	return 0;
}