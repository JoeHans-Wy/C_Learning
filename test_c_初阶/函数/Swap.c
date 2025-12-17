#define _CRT_SECURE_NO_WARNINGS
void Swap(int* x, int* y)
{
	//printf("交换前的x=%d y=%d\n", x, y);

	int z = 0;
	z = *x;
	*x = *y;
	*y = z;
	//printf("交换后的x=%d y=%d\n", x, y);

}