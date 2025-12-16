#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>

//sizeof

//int main()
//{
//	printf("%d\n", sizeof(char));	//1
//	printf("%d\n", sizeof(short));	//2
//	printf("%d\n", sizeof(int));	//4
//	printf("%d\n", sizeof(long));	//4
//	printf("%d\n", sizeof(float));	//4
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(double));	//8
//	
//	return 0;
//} 

//整型和非整型

//int main()
//{
//	int age = 20;
//	double price = 66.666;
//	printf("%d\n", age);
//	printf("%f\n", price);
//
//	return 0;
//}

//各符号的基本运用

//int main()
//{	
//	char Name[16] = "王钰";
//	short Age = 22;
//	int High = 184;
//	char Score = 'c';
//	char Sex[4] = "男"; //	定义了一个名为sex的数组用来存储性别
//	float Weight = 95.5;
//
//	printf("%s\n",Name);
//	printf("%d\n",Age);
//	printf("%d\n",High);
//	printf("%c\n", Score);
//	printf("%s\n", Sex);
//	printf("%.2f\n", Weight);
//
//	return 0;
//}

//加减运算

//int main()
//{
//	int num1 = 0;
//	int num2 = 0; //初始化
//
//	//输入
//	printf("请输入两个整数，用空格隔开\n");
//	scanf("%d %d", &num1 ,&num2);
//	
//	//求和输出
//	printf("正在进行加法运算\n");
//	int sum = num1 + num2;
//	printf("两个数加起来为%d\n", sum);
//
//	printf("\n");
//
//	//相减输出
//	printf("正在进行减法运算\n");
//	int cha = num1 - num2;
//	printf("两个数相减为%d\n", cha);
//
//	return 0;
//}

//变量作用域

//int main()
//{
//	extern int a;//声明了了add文件的全局变量a
//	{	
//		int b = 5; //局部变量b，只在局部中，即括号中用
//		printf("%d, %d\n", a, b);
//	}
//	int b = 4;
//	printf("%d, %d", a, b);
//	return 0;
//}


 