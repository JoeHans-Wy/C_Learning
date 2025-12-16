#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int No = 0;
	float C = 0.0f;
	float Math = 0.0f;
	float English = 0.0f;
	
	scanf("%d;%f,%f,%f", &No, &C, &Math, &English);

	printf("The each subject score of No. %d is %.2f, %.2f, %.2f", No, C, Math, English);

	return 0;
}