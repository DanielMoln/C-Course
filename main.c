#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
	/*char a;
	printf("\nAdj meg egy karaktert: ");
	scanf("%c", &a);

	if ( isdigit(a) )
	{
		printf("Ez egy szam!");
	}
	else
	{
		printf("Ez nem szám");
	}*/

	/*char mondat[100];
	puts("\nAdj meg egy mondatot:");
	gets(mondat);

	printf("\n%d", countWords(mondat));
	checkWords(mondat);

	char a = 'a';
	puts("Nagybetusse/Kisbetusse alakitasa: ");
	printf("\n%c %c" , toupper(a), tolower(a));*/
	
	stringFuncs();
}

int isNum(char c)
{
	if ( isdigit(c) )
	{
		puts("Ez egy szám!");
	}
	else
	{
		puts("Ez nem szám!");
	}
}

int countWords(char* sentence)
{
	int i, db = 0;
	for (i=0; i < strlen(sentence); i++)
	{
		if ( isspace(sentence[i]) )
		{
			db++;
		}
	}
	return db + 1;
}

void checkWords(char* sentence)
{
	// how many up/lower characters there are in the word
	int i, smallDB, bigDB;
	
	for (i = 0; i < strlen(sentence); i++)
	{
		if ( islower(sentence[i]) ) smallDB++;
		if ( isupper(sentence[i]) ) bigDB++;
	}

	printf("Kisbetuk szama: %d Nagybetuk szama: %d", smallDB, bigDB);
}

void stringFuncs()
{
	char str1[100];
	char str2[80];

	puts("Add meg a string1-t= ");
	gets(str1);

	puts("Add meg a string2-t= ");
	gets(str2);

	strcpy(str1, str2);

	printf("\nA str1 erteke: %s", str1);
	printf("\nA str2 erteke: %s", str2);
}

