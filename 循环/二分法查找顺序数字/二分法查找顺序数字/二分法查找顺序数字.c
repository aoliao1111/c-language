//利用二分法的原理查找有序数组的某个数字的下标值
#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 17;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;

		if (arr[mid] < k)
		{
			left = mid + 1;
			
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
	
		}
		else
		{
			printf("下标是%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到\n");
	}

	return 0;
}