#include<stdio.h>
#include<windows.h>

int main()
{
	char arr1[] = "welcome to chain";
	char arr2[] = "################";
	int left = 0;
	int right = strlen(arr1)-1;//strlen���Լ��� �ַ����� ��β��־λ\0��ǰ�����
	                           //sizeof���Լ�����������ȫ���ĸ���
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		left++;
		right--;
		printf("%s", arr2);
		Sleep(1000);    //Sleep�ǿ�����ʱ�ĺ�����1000�ĵ�λ�Ǻ���
		//��ӡ����һ���������Ļ
		system("cls");
	}
	printf("%s", arr2);














	return 0;
}
