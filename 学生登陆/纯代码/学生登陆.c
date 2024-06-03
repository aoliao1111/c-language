#define _CRT_SECURE_NO_WARNINGS

////利用while循环比较整形密码是否相同
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int m = 0;
//	int b = 12345;
//
//	while (i < 4)
//	{
//		printf("请输入密码:");
//		scanf("%d", &m);
//		if (m == b)
//		{
//			printf("密码正确");
//			i++;
//			break;
//		}
//		else
//		{
//			printf("密码错误");
//			i++;
//			if (i < 4)
//			{
//				printf("还有%d次\n", (4 - i));
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






//利用for循环进行模拟
//其中运用到strcmp这个库函数可以比较两个字符串是否相等，如果输出为0，则代表两个字符串相等
//strcmp需要调用头文件string.h
#include<string.h>
#include<stdio.h>
int main()
{
	int i = 0;
	char arr[] = {0};

	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:");
		scanf("%s", arr);
		if (strcmp(arr, "abcdef") == 0)
		{
			printf("密码正确！");
			break;
		}
		else
		{
			printf("密码错误！还剩%d\n",(2-i) );
			

		}

	}
	if (i == 3)
		printf("密码错误，退出\n");


	return 0;


}

