#include<stdio.h>

int main()
{
	int num, sum;
	
	printf("Enter a number : ");
	scanf("%d", &num);
	
	sum = (num * (num + 1)) / 2;
	
	printf("The sum is %d", sum);
		
	return 0;
}