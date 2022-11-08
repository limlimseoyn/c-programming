#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void) {
	int arrayN[5] = { 5 };
	int arrayOdd[5];
	int arrayEven[5];

	int i = 0;
	int k = 0;
	int j = 0;

	int logic = 0;

	int countOdd = 0;
	int countEven = 0;

	printf("5개의 정수를 입력하세요: ");
	scanf("%d %d %d %d %d", &arrayN[0], &arrayN[1], &arrayN[2], &arrayN[3], &arrayN[4]);

	for (i = 0; i < 5; i++)
	{
		logic = arrayN[i];
		if (logic % 2 == 1) {
			arrayOdd[countOdd] = logic;
			countOdd++;
		}
		else {
			arrayEven[countEven] = logic;
			countEven++;
		}
	}

	printf("\n홀수 출력: ");
	for (k = 0; k < countOdd; k++)
	{
		printf("%d ", arrayOdd[k]);
	}
	printf("\n짝수 출력: ");
	for (j = 0; j < countEven; j++)
 {
		printf("%d ", arrayEven[j]);
	}

	return 0;
}