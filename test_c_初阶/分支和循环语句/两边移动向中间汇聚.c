#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	char arr1[] = { "welcome to bit!!!!" };
	char arr2[] = { "##################" };

	int left = 0;
	int right = strlen(arr2) - 1;
	
	//当左下标比右下标小时一直循环，直到为假
	while(left<right)
	{
		//每次将arr1的左右下标赋给arr2,打印后再进行left++;right--;
		//重复让arr2的每一个下标都被遍历赋值,直到left比right要大了，证明从两边汇集到中间了
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);//需要引入头文件#include<windows.h>但vs2022版本不需要
		system("cls");//需要引入头文件#include<stdlib.h>但vs2022版本不需要,cls是windows cmd清空屏幕的命令clean scream
		left++;
		right--;
	}
	printf("%s\n", arr2);

	return 0;
}