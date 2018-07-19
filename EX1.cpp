#include <stdio.h>
#include <conio.h>

int main ()
{
	float n1, n2;
	char op;
	float result;
	printf("Enter operations: ");
	scanf("%f %c %f", &n1, &op, &n2);
	switch(op)
	{
		case '+': result = n1 + n2;
				  printf("%f %c %f = %f", n1, op, n2, result);
				  break;
		case '-': result = n1- n2;
				  printf("%f %c %f = %f", n1, op, n2, result);
				  break;
		case '*': result = n1 * n2;
				  printf("%f %c %f = %f", n1, op, n2, result);
				  break;
		case '/': 
				if (n2 == 0)
				{
					printf("Divide by 0");
				}
				else 
				{
					result = n1/n2;
					printf("%f %c %f = %f", n1, op, n2, result);
				}
				break;
		default: printf("Operations is not supported");
	}
	getch();
	return 0;
}
