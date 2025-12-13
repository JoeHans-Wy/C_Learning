#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//typedef unsigned int unit;//unit就等同于unsigned int
//
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//
//int main()
//{
//	unsigned int a = 10;
//	unit b = 10;
//
//	struct Node n;//typedef类型重命名，缩写代码，起到简化作用，相当于取小名，本质还是他；
//	Node n1;//Node 等于struct Node
//
//	return 0;
//}
//void test()
//{
//	static int a = 1;//只在函数第一次被调用时才会赋值a,之后会因为static的修饰，生命周期延长，不再执行
//	a++;//第二次以及之后只会从这开始，并继承静态区a的值
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}
// 
// 
//extern int a;//声明项目中的全局变量a时才可以正常运行
//int main()
//{
//	//printf("%d\n", a);//在a没时声明会无法被识别
//	printf("%d\n", a);//而被static修饰过后的外部符号a，即使被声明也无法使用
//	//原因：a的外部链接属性被修饰为内部链接属性，
//	//无法再被其它源文件链接，只可在所处源文件中使用这个全局变量
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//正常来说不声明时是无法识别该函数的，但vs2022可以直接识别外部函数
//	//可以不用extern就可成功运行
//
//	//与static修饰全局变量同理，函数的外部链接属性被修饰为内部链接属性
//	//无法再被其它源文件链接
//	printf("%d", sum);
//
//	return 0;
//}

int main()
{
	register int num = 3;//需要大量使用时，建议：放在寄存器中，大幅提高读写速度

	return 0;
}