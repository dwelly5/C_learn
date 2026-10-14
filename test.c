#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main()
{
	int sum = 0;
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d", sum);

	return 0;
}