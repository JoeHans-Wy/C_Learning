#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

extern int get_Max(x, y);
extern void Swap(int* x, int* y)//传递到的是形参，形参的修改不会改变实参，只是一份临时拷贝
;//可以通过直接传递地址来避免实参原数值没变化的情况，直接操作地址上存的数
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "Hello World!";
	strcpy(arr1, arr2);//将arr2的内容复制到arr1
	printf("%s\n", arr1);

	memset(arr2+6, 'x', 2);
	printf("%s\n",arr2);

	int x = 0;
	int y = 0;
	scanf("%d %d", &x, &y);

	int ret = get_Max(x, y);
	printf("%d较大\n", ret);

	printf("交换前的x=%d y=%d\n", x, y);
	Swap(&x, &y);//x,y是实参,直接把地址给Swap操作
	printf("交换后的x=%d y=%d\n", x, y);

	return 0;
}