#include<stdio.h>

int main()
{
	char ch;
	
	printf("Enter a character : ");
	scanf("%c", &ch);
	
	if((ch >= 65 && ch <= 90) || (ch >= 97 && ch <=122))
		printf("Alphabet");
	else
		printf("Not an alphabet");
		
	return 0;
}