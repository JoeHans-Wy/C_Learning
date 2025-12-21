#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int arr[10];
	int arr1[3][4];

	printf("%p\n", arr);	//数组首元素地址
	printf("%p\n", arr+1);	//数组首元素地址+1.
	printf("------------------\n");
	printf("%p\n", &arr[0]);	//数组首元素地址
	printf("%p\n", &arr[0]+1);	//数组首元素地址+1
	printf("------------------\n");
	printf("%p\n", &arr);		//整个数组地址
	printf("%p\n", &arr+1);		//整个数组地址+1
	printf("------------------\n");
	printf("%p\n", &arr1[0][0]);	//数组首元素地址
	printf("%p\n", &arr1 + 1);		//整个数组地址+1
	printf("------------------\n");
	printf("%d\n",sizeof(arr1) / sizeof(arr1[0]));	//整个数组的大小除以数组中第一行的大小可以算出有几行
	printf("%d\n",sizeof(arr1[0]) / sizeof(arr1[0][0]));//数组中第一行的大小除以数组首个元素的大小可以算出有几列


	return 0;
}