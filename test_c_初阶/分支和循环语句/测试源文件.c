#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//声明函数
extern void CPD(int x, int y);
extern void SC(int sc);
extern void JO(int i);
extern void JS();
extern void PR();
extern void GET();
extern void PassWord();


int main()
{	
	PassWord();

	int x, y;
	printf("请输入要相比的整数，用空格隔开\n");
	scanf("%d %d", &x, &y);
	CPD(x, y);
	
	int i;
	printf("输入要判断奇偶的数\n");
	scanf("%d", &i);
	JO(i);

	int week;
	printf("请输入数字，判断星期几\n");
	scanf("%d", &week);
	SC(week);


	JS();//打印100以内的奇数

	PR();//打印1到10,	5跳过，9停止

	GET();//在getchar运行时，如果前面已有其它输入操作会导致只读取换行符操作，
	//看起来就像是被跳过了
	//解决方法：放到主程序输入操作第一位执行可以避免，也可以增加使用一个getchar()来读取换行符，再进行读取键盘输入

	return 0;
}