#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void print(unsigned int n)
{
	if (n > 9)
	{
		print(n / 10);//如果输入的数大于9，就递归调用print函数，一直到小于9为止，然后输出
		//n=1234,n=123,n=12,n=1,最后打印n%10
	}
	printf("%d ", n % 10);//例如1234，会反复进去先打印1再2再3再4
}		

int main()
{
	unsigned int num = 0;
	scanf("%u", &num);
	print(num);

	return 0;
}


//while (num)
//{
//	printf("%d", num % 10);
//	num = num / 10;
//}					//这个只会倒着打印