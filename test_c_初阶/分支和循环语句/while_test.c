#define _CRT_SECURE_NO_WARNINGS
void PR()
{
	int i = 1;
	while (i<=10)
	{
		if (i == 5)
		{
			i++;
			continue;//等于5时，i++并跳过此次循环，
		}
		else if (i == 9)
		{
			break;//等于9时终止循环
		}
		printf("%d\t", i);
		i++;
	}
	printf("\n");
}