/*
  Binoy Das Gupta
  C program to check whether a number is divisible by 5 and 11 or not.
  13-03-2021
*/

#include<stdio.h>
int main()
{
	//declaring variable
	int num;
	
	//taking input
	printf("Enter a number = ");
	scanf("%d",&num);
	
	if((num%5==0)&&(num%11==0))
	{
		printf("%d is divisible by both 5 and 11\n",num);
	}
	else
	{
		printf("%d is not divisible by 5 and 11\n",num);
	}
	
	return 0;
}
