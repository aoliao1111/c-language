#define _CRT_SECURE_NO_WARNINGS

////����whileѭ���Ƚ����������Ƿ���ͬ
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int m = 0;
//	int b = 12345;
//
//	while (i < 4)
//	{
//		printf("����������:");
//		scanf("%d", &m);
//		if (m == b)
//		{
//			printf("������ȷ");
//			i++;
//			break;
//		}
//		else
//		{
//			printf("�������");
//			i++;
//			if (i < 4)
//			{
//				printf("����%d��\n", (4 - i));
//				continue;
//			}
//			else
//			{
//				break;
//			}
//		}
//
//	}
//	return 0;
//}
//






//����forѭ������ģ��
//�������õ�strcmp����⺯�����ԱȽ������ַ����Ƿ���ȣ�������Ϊ0������������ַ������
//strcmp��Ҫ����ͷ�ļ�string.h
#include<string.h>
#include<stdio.h>
int main()
{
	int i = 0;
	char arr[] = {0};

	for (i = 0; i < 3; i++)
	{
		printf("����������:");
		scanf("%s", arr);
		if (strcmp(arr, "abcdef") == 0)
		{
			printf("������ȷ��");
			break;
		}
		else
		{
			printf("������󣡻�ʣ%d\n",(2-i) );
			

		}

	}
	if (i == 3)
		printf("��������˳�\n");


	return 0;


}

