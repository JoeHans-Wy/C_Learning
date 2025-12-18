#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int is_leap_year(int year)
{
	if (((year % 4 == 0) && (year % 100 != 0)) || year % 400 == 0)//润年可以被4整除
		return 1;
	else
		return 0;
}

int main()
{
	int year = 0;
	scanf("%d", &year);
	if (is_leap_year(year))//可以被
		printf("%d是闰年", year);
	else
		printf("%d不是闰年", year);

	return 0;
}