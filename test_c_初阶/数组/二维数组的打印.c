#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int arr[3][4] = {0};
	int i = 0;

	for (i = 0; i < 3; i++)	//定位行，从第0行开始
	{
		int j = 0;
		for (j = 0; j < 4; j++)	//定位列,从第0列开始
		{
			scanf("%d", &arr[i][j]);	//输入0行0列的元素，然后0行1列，以此类推
		}
	}

	for (i = 0; i < 3; i++)	//定位行，从第0行开始
	{
		int j = 0;
		for (j = 0; j < 4; j++)	//定位列,从第0列开始
		{
			printf("%d ", arr[i][j]);	//输出0行0列的元素，然后0行1列，以此类推
		}
		printf("\n");	//上一列的输出完，退出循环后，换行
	}


	return 0;
}