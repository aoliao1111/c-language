//用for循环实现九九乘法表的实现
//注：for循环和while循环的区别是：
//    for循环加入break之后，会在运行调整部分
//    while循环加入break之后，不会在运行break之后的部分
#include <stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 10; i++)
	{
		
		for (j = 0; j <= i; j++)
		{
			printf("%d*%d=%d  ",i,j ,i * j);
		}
		printf("\n");
	}

	return 0;
}

