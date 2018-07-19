#include <stdio.h>
#include <conio.h>
#define pa 9000000
#define pd 3600000
#define limit1 5000000
#define limit2 10000000
#define limit3 18000000

int main ()
{
	float inc;
	int n;
	do{
		printf("Enter your income of this year: ");
		scanf("%f", &inc);
		printf("Enter the number of your dependent people: ");
		scanf("%d", &n);
		if (inc < 0 || n < 0 )
		{
			printf("Wrong data. Please try again !");
		} 
	}while (inc < 0 || n < 0);
	float it;
	float tf = 12*(pa + n*pd);
	float ti = inc - tf;
	if (ti < 0)
	{
		it = 0;
		ti = 0;
	} 
	else if (ti <= limit1)
			{
				it = ti * 0.05;
			}
		 else if (ti <= limit2)
		 	{
		 		it = limit1*0.05 + (ti - limit1) * 0.1;	
			}
			  else if (ti <= limit3)
			  		{
			  			it =limit1*(0.05 + 0.1) + (ti - limit2) * 0.15;
					}
					else
					{
						it =limit1*(0.05 + 0.1) + (limit3-limit2)*0.15 + (ti - limit3) * 0.2;
					}
	printf ("Your tax free income is: %.2f\n", tf);
	printf ("Your taxable income is: %.2f\n", ti);
	printf ("Your income tax is: %.2f", it);
	getch();
	return 0;	
}

