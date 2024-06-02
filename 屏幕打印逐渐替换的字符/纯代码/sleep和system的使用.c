#include<stdio.h>
#include<windows.h>

int main()
{
	char arr1[] = "welcome to chain";
	char arr2[] = "################";
	int left = 0;
	int right = strlen(arr1)-1;//strlen可以计算 字符数组 结尾标志位\0的前面个数
	                           //sizeof可以计算数组里面全部的个数
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		left++;
		right--;
		printf("%s", arr2);
		Sleep(1000);    //Sleep是可以延时的函数，1000的单位是毫秒
		//打印完上一个后清空屏幕
		system("cls");
	}
	printf("%s", arr2);














	return 0;
}
