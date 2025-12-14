#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//#define num 100

//#define ADD(x,y) ((x)+(y))

//int main()
//{
	//printf("%d\n", num);
	//int n = num;
	//printf("%d\n", n);
	//int arr[num] = {0};
	//printf("%d\n", sizeof(arr)/sizeof(arr[0]));
	////num = 50;被define定义过后便不可直接修改

	//int a = 10;
	//int b = 20;
	//int c = ADD(a, b);
	//printf("%d", c);

//	int a = 10;
//	int* p = &a;
//
//	char ch = 'w';
//	char* cc = &ch;
//
//	*p = 20;//p指向&a的地址，而*p指向的是a，可以通过改变*p的操作直接修改a的值
//
//	printf("%p\n",&a);
//	printf("%p\n",p);
//
//	printf("%d\n", a);
//
//	printf("%p\n", &ch);
//	printf("%p\n", cc);
//
//	//不管是什么类型的指针，都是在创建指针变量
//	//指针变量的大小取决于机器的位数
//	//32位机器是4字节 x86
//	//64位机器是8字节 x64
//
//	printf("%zu\n", sizeof(char*));
//	printf("%zu\n", sizeof(int*));
//	printf("%zu\n", sizeof(short*));
//	printf("%zu\n", sizeof(float*));
//	printf("%zu\n", sizeof(long*));
//
//	return 0;
//}


//struct Stu
//{
//	char name[20];
//	int Age;
//	char Sex[10];
//	float High;
//	double Weight;
//};
//
//void print(struct Stu *ps)
//{
//	//->
//	//结构体指针变量->成员名 相当于 (*ps).成员名 相当于 结构体对象.成员名
//	printf("%s %d %s %.2f %.2f", ps->name, ps->Age, ps->Sex, ps->High, ps->Weight);
//};
//
//int main()
//{
//	struct Stu s = 
//	{
//		"张三",
//		18,
//		"男",
//		174,
//		70
//	};
//	//printf("%s %d %s %.2f %.2f", s.name,s.Age,s.Sex,s.High,s.Weight);//结构体对象.成员名
//	print(&s);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d %d", a / b, a % b);
//
//	return 0;
//}