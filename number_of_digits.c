#include<stdio.h>

int main()
{
	int num, digits = 0;
	
	printf("Enter a number : ");
	scanf("%d", &num);
	
	if(num == 0)
		digits++;
	
	while(num != 0)
	{
		num = num/10;
		digits++;
	}
	
	printf("Number of digits is %d", digits);
		
	return 0;
}