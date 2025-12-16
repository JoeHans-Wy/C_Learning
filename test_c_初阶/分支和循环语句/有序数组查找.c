#define _CRT_SECURE_NO_WARNINGS
void YXCZ()
{
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int rz = sizeof(arr) / sizeof(arr[0]);
	int k = 7;
	for (int i = 0; i < rz ; i++)
	{
		if (arr[i] == k)
		{
			printf("找到了，所在数组下标为%d\n", i);
			break;
		}
	}*/
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int i = 0;
	int rz = sizeof(arr) / sizeof(arr[0]);

	int left = 0;
	int right = rz - 1;
	

	while(left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了，下标是%d", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到");
	}
}