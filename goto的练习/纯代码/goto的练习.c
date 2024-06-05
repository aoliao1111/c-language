#include<string.h>
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main()
{
	char input[20] = {0};
	system("shutdown -s -t 60");
	
again:
	printf("你的电脑将在60s后关机，请输入：狗东西，已结束关机\n");
	scanf_s("%s" , input);
	int num = strcmp(input, "狗东西");
	if ( num== 0)
	{
		printf("输入成功，将阻止关机。\n");
		system("shutdown -a");
	}
	else
	{
		printf("输入错误，不能关机，重新输入\n");
		goto again;
	}

	return 0;
}