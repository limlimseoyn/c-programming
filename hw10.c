#include <stdio.h>

typedef struct point
{
	char name[20];
	char country[20];
	char people[20];
} Point;

void RemoveBSN(char str[])
{
	int len = strlen(str);
	str[len - 1] = 0;
}


int main(void)
{
	Point name[20];
	int i;
	printf("Input three cities:\n");
	for (i = 0; i < 3; i++)
	{
		fputs("Name> ", stdout);
		fgets(name[i].name, sizeof(name[i].name), stdin);
		RemoveBSN(name[i].name);
		fputs("Country> ", stdout);
		fgets(name[i + 3].country, sizeof(name[i + 3].country), stdin);
		RemoveBSN(name[i+3].name);
		fputs("Population> ", stdout);
		fgets(name[i + 6].people, sizeof(name[i + 6].people), stdin);
		RemoveBSN(name[i+6].name);
	}

	printf("Printing the three cities:\n");
	for (i = 0; i < 3; i++)
	{
		printf("%d. %s in %s with a population of %s people\n", i+1, name[i].name, name[i + 3].country, name[i + 6].people);
	}
	return 0;
}
