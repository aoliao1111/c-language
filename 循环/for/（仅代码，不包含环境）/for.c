//��forѭ��ʵ�־žų˷����ʵ��
//ע��forѭ����whileѭ���������ǣ�
//    forѭ������break֮�󣬻������е�������
//    whileѭ������break֮�󣬲���������break֮��Ĳ���
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

