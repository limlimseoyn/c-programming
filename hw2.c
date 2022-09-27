#include<stdio.h>

int main(void){
	float dist = 0;
	float result = 0;
	
	printf("Please enter kilometers: ");
	scanf("%f", &dist);
	
	result = dist / 1.609;
	
	printf("%.1f km is equal to %.1f miles.", dist, result);
	
	return 0;
}
