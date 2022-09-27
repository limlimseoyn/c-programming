#include<stdio.h>

int main(void){
	int number = 0;
	
	int i = 0;
	int count = 0;
	
	printf("Please enter a number: ");
	scanf("%d", &number);
	
	for(i = 1; i <= number; i ++){
		if((number % i) == 0){
			count ++;
		}
	}
	if(count == 2){
		printf("It is a prime number.");
	}
	else{
		printf("It is NOT a prime number.");
	}
	
	return 0;
}
