#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float r = 0.0f;
	float v = 0.0f;
	scanf("%f", &r);
	v = 4 / 3.0 * 3.1415926 * r * r * r;
	printf("%.3f", v);
	return 0;
}