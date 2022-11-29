#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	char ch;
	
	do {
		printf("대문자 : ");
		scanf(" %c", &ch);
	
		if (ch & 32) printf("대문자를 입력하세요.\n");
    while (ch & 32);                               
	
	printf("%c\n", ch ^ 32);

	return;
}
