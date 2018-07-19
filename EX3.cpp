#include <stdio.h>
#include <conio.h>

int main ()
{
	int n;
	float S = 0;
	do{
		printf("Enter number = ");
		scanf("%d", &n);
		S+=n;
	}while (n!=0);
	printf("Sum of all numbers that you're just entered: %.2f", S);
	getch();
	return 0;
}
