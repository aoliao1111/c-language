#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//利用strcp库函数实现两个数组的交换
	/*char arr1[] = { 0 };
	char arr2[] = "hello world";
	strcpy(arr1,arr2);
	printf("%s" , arr1);*/
	//使用memset库函数实现改变字符串的内容
	char arr[] = {"nihao chain"};
	memset(arr,"1",6);
	printf("%s",arr);
	return 0;
}