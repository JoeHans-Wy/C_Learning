#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int arr[10] = { 0 }; /*{ 1,2,3,50,5,6,7,8,9,0 };*/
	int max = arr[0];

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);

		if (max < arr[i])
			max = arr[i];
	}
	printf("%d", max);
	return 0;
}