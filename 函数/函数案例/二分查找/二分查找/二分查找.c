#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�������ֲ���

//ע���ڽ�������õ������ڲ�ʱ������ʱ�����ַ������������
int binary_search(int arr[], int k, int sz)
{
	int left = 0;
	int right = sz - 1;
	
	//�ж��Ƿ����м���������С��
	while (left<=right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] < k)
		{
			left = mid +1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}

	}

	return -1;
}



int main()
{
	//���ֲ���
	
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr)/sizeof(arr[0]);
	int k = 8;
	int num = binary_search( arr,  k, sz);
	//�ҵ��ˣ������±�
	//û�ҵ�������-1
	if (num == -1)
	{
		printf("�Ҳ���\n");
		
	}
	else
	{
		printf("%d\n", num);
	}
	return 0;

}