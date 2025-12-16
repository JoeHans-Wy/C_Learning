#define _CRT_SECURE_NO_WARNINGS
void QTFOR()
{
	for (int i = 1;i < 10;i++ )
	{
		for (int j = 1;j <= i;j++ )
		{
			printf("%d * %d = %d\t", j, i, i * j);//¾Å¾Å³Ë·¨±í´òÓ¡
		}
		printf("\n");
	}
}