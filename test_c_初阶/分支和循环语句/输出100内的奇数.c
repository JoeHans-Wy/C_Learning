#define _CRT_SECURE_NO_WARNINGS

void JS()
{
	int a = 0;
	while (a < 100)
	{
		if (a % 2 == 1)
		{
			printf("%d\t",a);
		}
		a++;
	}
	printf("\n");
}