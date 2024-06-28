#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//函数二分查找

//注意在将数组调用到函数内部时，传的时数组地址不是整个数组
int binary_search(int arr[], int k, int sz)
{
	int left = 0;
	int right = sz - 1;
	
	//判断是否是中间数，或大或小，
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
	//二分查找
	
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr)/sizeof(arr[0]);
	int k = 8;
	int num = binary_search( arr,  k, sz);
	//找到了，返回下标
	//没找到，返回-1
	if (num == -1)
	{
		printf("找不到\n");
		
	}
	else
	{
		printf("%d\n", num);
	}
	return 0;

}