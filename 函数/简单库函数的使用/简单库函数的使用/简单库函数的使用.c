#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//����strcp�⺯��ʵ����������Ľ���
	/*char arr1[] = { 0 };
	char arr2[] = "hello world";
	strcpy(arr1,arr2);
	printf("%s" , arr1);*/
	//ʹ��memset�⺯��ʵ�ָı��ַ���������
	char arr[] = {"nihao chain"};
	memset(arr,"1",6);
	printf("%s",arr);
	return 0;
}