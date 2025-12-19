#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "ADD.h"
//采用定义头文件的方法

//一般来说定义在main函数后的函数在调用时，编译器会不认识该函数，要满足先声明再使用，它并不会去检查main函数后面的函数
//但vs2022以及新版本会在找不到时检查，可以在前面未定义的情况下找到后面定义的代码



int main()
{
	int x = 10;
	int y = 20;
	int sum = ADD(x, y);
	printf("%d", sum);

	return 0;
}

