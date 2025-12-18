#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int Binary_search(int arr[], int k, int sz)
{
	int left = 0;//left和right都是下标
	int right = sz - 1;
	while(left <= right)
	{
		int mid = left + (right-left) / 2;
		if (arr[mid] < k)//用下标为mid的arr数组和k进行比较
			left = mid + 1;
		else if (arr[mid] > k)
			right = mid - 1;
		else 
			return mid;
	}
	if (left > right)
		return -1;
}

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10 };
	int k = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	scanf("%d", &k);
	int ret = Binary_search(arr, k, sz);
	if (ret != -1)
		printf("找到了，下标为%d\n", ret);
	else
		printf("没找到\n");
	return 0;
}