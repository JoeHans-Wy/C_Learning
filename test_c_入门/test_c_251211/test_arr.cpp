#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	while (i < 10)
	{
		printf("%d\t", arr[i]);
		i++;
	}
	/*for(int i=0;i<10;i++)
	{
		int temp = arr[i];
		printf("%d\t", temp);
	}*/

	return 0;
}