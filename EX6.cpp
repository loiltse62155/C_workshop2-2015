#include <stdio.h>
#include <conio.h>

int main ()
{
	printf("\t\tASCII CODE TABLE");
	for (int i = 0; i <= 255; i++)
	{
		printf("\n%c\t\t%d\t\t%o\t\t%X", i, i, i, i);
		
	}
	getch();
	return 0;
}
