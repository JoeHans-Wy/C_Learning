#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int arr[4] = { 0 };
	for (int i = 0; i < 4; i++)
	{
		scanf("%d", &arr[i]);
	}
	int Max = arr[0];
	for (int i = 1; i < 4; i++)
	{
		if (Max < arr[i])
		{
			Max = arr[i];
		}
	}
	printf("%d", Max);

	return 0;
}