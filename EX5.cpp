#include <stdio.h>
#include <conio.h>
#include <ctype.h>
int main ()
{
	int nVowels = 0; 
	int nConsonants = 0;
	int nOthers = 0;
	char ch;
	printf("Please enter a string:\n ");
	do{
		ch = getchar();
		ch = toupper(ch);
		if (ch >= 'A' && ch <= 'Z')
		{
			switch (ch)
			{
				case 'A': 
				case 'E':
				case 'I':
				case 'O':
				case 'U': nVowels++; break;
				default: nConsonants++; break;
			}
		}
		else nOthers++;
	}while(ch != '\n');
	printf("\nNumber of Vowels: %d", nVowels);
	printf("\nNumber of Consonants: %d", nConsonants);
	printf("\nNumber of others: %d", (nOthers-1));
	getch();
	return 0;
}
