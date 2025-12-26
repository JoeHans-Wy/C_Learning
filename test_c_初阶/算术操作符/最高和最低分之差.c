#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	int score[100] = { 0 };
	int i = 0;
	int max = 0;
	int min = 100;
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &score[i]);	
		if (score[i] > max)
		{
			max = score[i];
		}
		if (score[i] < min)
		{
			min = score[i];
		}
	}
	
	printf("%d", max - min);
}