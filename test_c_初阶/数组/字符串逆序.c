#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

//void reverse(char arr[],int rz)
//{
//	int left = 0;			//调用函数方式，但不递归
//	int right = rz - 1;
//
//	while (left <= right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//
//}

//void reverse(char* str)	//复杂版
//{
//	char tmp = *str;	//临时变量存储字符串第一位
//	int len = strlen(str);	//算出字符串大小
//	*str = *(str + len - 1);	//将最后一个字符赋值给第一位字符
//	*(str + len - 1) = '\0';	//将最后一个字符赋值为\0，如原本为abcdef,现在变为fbcde\0
//	//每次递归时首地址加1，避免重复递归同一个数，下次就是把e赋给b了，再下次是d赋给c,同时里面也做判断
//	//如果里面没有两个数了，为0或者为1就不用再进行这种赋值操作了
//	if (strlen(str + 1) >= 2)	
//		reverse(str + 1);
//	//递归到最后在把临时变量给到最后一位
//	*(str + len - 1) = tmp;
//}

int my_strlen(char arr[])
{
	int count = 0;
	while (*arr != '\0')
	{
		count++;
		arr++;
	}
	return count;
}

void reverse(char arr[], int left, int right)	//简易版，传下标递归着换，一直换到left < right时，每次递归left++,right--
{
	int tmp = arr[left];
	arr[left] = arr[right];
	arr[right] = tmp;
	if (left+1 < right-1)
		reverse(arr, left + 1, right - 1);
}

int main()
{
	char arr[] = "abcdefgh";

	int left = 0;
	int right = my_strlen(arr)-1;
	/*int left = 0;		//循环方式
	int right = strlen(arr) - 1;

	while (left <= right)
	{
		char tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}*/
	reverse(arr, left, right);

	printf("%s", arr);

	return 0;
}