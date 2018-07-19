#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	char c1, c2;
	printf("Enter character 1: ");
	scanf("%c", &c1);
	fflush(stdin);
	printf("Enter character 2: ");
	scanf("%c", &c2);
	
	if (c1 > c2)
	{
		c1 = c1 - c2;
		c2 = c1 + c2;
		c1 = c2 - c1;
	}
	int d =c2 - c1;
	printf("\nASCII code difference between character 1 and character 2: %d", d);
	for (char i = c1 + 1; i < c2; i++)
	{
		printf("\n%c\t%d\t%o\t%X", i, i, i, i);
	}
	getch();
	return 0;
}
