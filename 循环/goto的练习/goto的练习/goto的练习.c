#include<string.h>
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main()
{
	char input[20] = {0};
	system("shutdown -s -t 60");
	
again:
	printf("��ĵ��Խ���60s��ػ��������룺���������ѽ����ػ�\n");
	scanf_s("%s" , input);
	int num = strcmp(input, "������");
	if ( num== 0)
	{
		printf("����ɹ�������ֹ�ػ���\n");
		system("shutdown -a");
	}
	else
	{
		printf("������󣬲��ܹػ�����������\n");
		goto again;
	}

	return 0;
}