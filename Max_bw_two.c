/*
  Binoy Das Gupta
  C program to find maximum between two numbers using conditional operator 
  06-03-2021
*/

#include<stdio.h>
int main()
{
	//declaring variables
	int num1,num2,max;
	
	//taking inputs
	printf("Enter first number : ");
	scanf("%d",&num1);
	printf("Enter second number : ");
	scanf("%d",&num2);
	
	//conditional operator
	max = (num1>num2)?num1:num2;
	
	printf("Maximum between %d and %d is = %d\n",num1,num2,max);
	
	return 0;
}
