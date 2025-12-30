#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char* pa = NULL;
	int* pb = NULL;
	short* pc = NULL;
	double* pd = NULL;
	printf("%d\n", sizeof(pa));
	printf("%d\n", sizeof(pb));
	printf("%d\n", sizeof(pc));
	printf("%d\n", sizeof(pd));

	//不管是什么类型的指针变量大小都为4个字节。
	//但具有类型的指针在进行解引用时，决定了访问的字节数
	//如
	int a = 0x11223344;
	pa = &a;//char 类型的pa在解引用int类型的a时
	*pa = 0;//虽然可以修改该地址上的值，但只能访问1个字节的元素，在修改具有四个字节大小的a时，会赋值给最右边的1个字节
	printf("%X\n", a);//即0x11223300
	printf("pa = %X\n", pa);
	printf("pa + 1 = %X\n", pa + 1);//地址位+1字节 char类型
	pc = &a;
	*pc = 32;//同理，short类型的占据两字节大小，它解引用a时只会修改最右边两个字节的值
	printf("%X\n", a);//即0x11220020
	printf("pc = %X\n", pc);
	printf("pc + 1 = %X\n", pc + 1);//地址位+2字节 short类型
	//指针类型决定了向前或向后一次性跳过多少字节
	

	return 0;
}