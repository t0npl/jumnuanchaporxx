#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int checkprime(int);
int main()
{
	int i, x, y;
	printf("Input two numbers ");
	scanf("%d %d", &x, &y);
	if (x > y)
	{
		if (y == 1)
			y++;
		else if (x == 1)
			x++;
		for (i = y; i <= x; i++)
		{
			if (checkprime(i) == 1)
				printf("%d ", i);
		}
	}
	else if (y > x)
	{
		if (y == 1)
			y++;
		else if (x == 1)
			x++;
		for (i = x; i <= y; i++)
		{
			if (checkprime(i) == 1)
				printf("%d ", i);
		}
	}

	return 0;
}
int checkprime(int i)
{
	int j, count = 0;
	for (j = 2; j < i; j++)
	{
		if (i % j == 0)
			count++;
	}

	if (count > 0)
		return 0;
	else
		return 1;
}