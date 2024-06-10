//º∆À„1£°+2£°+°£°£°£°£+10£°
#include<stdio.h>
int main()
{
	int i = 1;
	int ret = 1;
	int num = 1;
	int a = 0;
	for (num = 1; num <= 10; num++)
	{
		ret = 1;
		for (i = 1; i <= num; i++)
		{
			ret = ret * i;
		}
		a = a + ret;
	}

	printf("%d ",a );

	return 0;
}