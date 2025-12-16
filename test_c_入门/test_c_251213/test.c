#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	//int x = 0;//初始化
	//double y = 9;
	//x = 9;//赋值
	//x += 2;
	//printf("%d\n",x);
	//x -= 2;
	//printf("%d\n",x);
	//x *= 2;
	//printf("%d\n",x);
	//x %= 7;
	//printf("%d\n",x);
	//y /= 2;
	//printf("%.2f\n",y);

	//int flag = 0;
	//if (flag)//if内为真时才会执行，否则跳过，为0时即为假，执行else语句
	//	printf("真");
	//else
	//	printf("假");
	//int x = 0;
	//int arr[10] = { 0 };
	//printf("%d\n", sizeof(x));//4
	//printf("%d\n", sizeof(int));//4
	//printf("%d\n", sizeof x);//4,sizeof单个元素时括号可省略，但不可写为sizeof int
	//printf("%d\n", sizeof(arr));//数组元素*整型字节
	//printf("%d\n", sizeof(arr[0]));
	//printf("%d\n", sizeof arr / sizeof(arr[0]));//常见的求接收数组时，数组中的元素个数

	//int x = 5;
	//int y = x++;
	//printf("%d %d\n", x,y);//6 5
	//y = ++x;
	//printf("%d %d\n", x,y);//7 7
	//y = x--;
	//printf("%d %d\n", x,y);//6 7
	//y = --x;
	//printf("%d %d\n", x,y);//5 5

	//int a = 10;
	//int b = 20;
	//int c = 5;
	//int d = (c = b - a, b = a - c, c = 2 * a + b);//d = c的值了，括号内表达式从左到右依次计算，且赋值时会改变默认的值
	//printf("%d %d %d %d", a, b, c, d);

	//int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	//int n = 3;
	//arr[n] = 20;
	//printf("%d\n", arr[n]);
	//for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)//遍历数组，i小于数组内元素个数
	//{
	//	printf("%d\n", arr[i]);
	//}

	return 0;
}