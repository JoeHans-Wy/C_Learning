#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a[5] = { 0 };
	int* p;
	for (p = &a[0]; p < &a[5];)
	{
		*p++ = 0;//意思是后置的++，先用再加，*p=0后p++,因为p是int类型的指针变量，和int类型的数组a是相同的
		//每次p++相当于下标++，也可以写为
		/*
		for (p = &a[0]; p < &a[5];p++)
		{
			*p=0;
		}
		会更好理解一些*/
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", a[i]);
	}

	return 0;
}