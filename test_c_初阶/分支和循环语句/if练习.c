#define _CRT_SECURE_NO_WARNINGS

void CPD(int x, int y)
{
	if (x > y)
		printf("%d比%d大\n", x, y);
	else if (x < y)
		printf("%d比%d小\n", x, y);
	else
		printf("两个一样大\n");
}

void JO(int i)
{
	if (i % 2 == 0)
		printf("%d为偶数\n", i);
	else
		printf("%d为奇数\n", i);
}