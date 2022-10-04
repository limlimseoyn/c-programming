#include<stdio.h>
#define_CRT_SECURE_NO_WARNINGS

int main(void) {
	for (int i = 0; i < 5;i++)
	{
		for (int k = 0; k < (5 - i) * 2 - 1; k++)
		{
			printf("*");
		}

		for (int j = 0; j < i; j++)
		{
			printf("");
		}
		printf("\n");
	}
	return 0;
}

