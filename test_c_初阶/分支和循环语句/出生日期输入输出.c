#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int year = 0;				//	char year[20] = { 0 };
	int month = 0;				//  char month[20] = { 0 };
	int date = 0;				//	char date[20] = { 0 };

	//scanf函数可以通过%m,可以指定接收几位数，以此来达到不用空格将能将一串数字赋予几个变量
	scanf("%4d%2d%2d",&year,&month,&date);
	//		scanf("%4s%2s%2s", &year, &month, &date);  
	

	//%02d意思为输出2位元素，无两位时用0补齐，例如只含1时，输出为01
	printf("year=%d\n",year);		//	printf("year=%s\n", year);
	printf("month=%02d\n",month);	//	printf("month=%s\n", month); 也可以直接使用字符串形式，拿到什么就输出什么，就不用补齐0了   
	printf("date=%02d\n",date);		//	printf("date=%s\n", date);

	return 0;
}