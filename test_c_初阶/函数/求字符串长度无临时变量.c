#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int my_strlen(char *str)
{
	//int count = 0;
	//while (*str != '\0')
	//{
	//	count++;//计数，每当一个元素不是'\0'时，计数器++
	//	str++;//找下一个地址 str存的是地址，*str存的是那个地址下的数组元素
	//}
	//return count;				//但不符题意，还是创建了临时变量count

	if (*str != '\0')//判断数组的首地址元素是否为'\0'
		return 1 + my_strlen(str + 1);//不是则返回1+ my_strlen(str + 1),(str+1)为地址加1字节，查看下一个数组元素
	else
		return 0;//直到为'\0'，结束递归，返回1+1+1+0
}


int main()
{
	char arr[] = {"abc"};
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}