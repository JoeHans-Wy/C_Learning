#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void bubble_short(int arr[],int rz)
{
	int i = 0;
	int j = 0;
	int min = 0;	//定义最小值的下标
	for (j = 1; j < rz; j++, min++)	//冒泡排序对比次数是每次减1，第一次是元素个数减1
	{
		//每次j++时代表着前j个数被排好了
		//i的初始值和j一样即可
		//前面对比好的就不动它了，从已经对比好的数后面开始对比
		for (i = j; i < rz; i++)
		{
			//可以通过改变if判断逻辑来改变数组排序，为升序用">",还是降序"<"
			if (arr[min] < arr[i])	//判断暂时设为最小值的arr[min]是否小于arr[i],如果不是，则调换他们俩的位置
			{
				int tmp = arr[min];
				arr[min] = arr[i];
				arr[i] = tmp;
			}
		}
		//循环中每次对比好一个数后，min++,加一位下标设为最小继续和后面进行对比
	}

}

int main()
{
	int arr[] = { 1,1,4,5,1,4,1,9,1,9,8,1,0 };//转换为降序
	int rz = sizeof(arr) / sizeof(arr[0]);	//找数组有多少元素
	bubble_short(arr, rz);
		
	for (int i = 0; i < rz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
