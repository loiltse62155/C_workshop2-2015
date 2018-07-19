#include <stdio.h>
#include <conio.h>

int main ()
{
	int n1, n2;
	do{
		printf("Enter 2 numbers that you want to swap: ");
		scanf("%d %d", &n1, &n2);
		n1 = n1 - n2;
		n2 = n1 + n2;
		n1 = n2 - n1;
	  } while (n1 == 0 && n2 == 0);
	printf ("2 numbers after swapping: %d, %d", n1, n2);
	getch();
	return 0;
}
