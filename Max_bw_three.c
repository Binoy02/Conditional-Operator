/*
  Binoy Das Gupta
  C program to find maximum among three numbers using conditional operator
  06-03-2021
*/

#include<stdio.h>
int main()
{
	//declaring variables
	int num1,num2,num3,max;
	
	//taking inputs
	printf("Enter three numbers = ");
	scanf("%d %d %d",&num1,&num2,&num3);
	
	//conditional operator
	max = (num1>num2 && num2>num3)?num1:(num2>num3)?num2:num3;
	
	printf("Maximum among %d %d and %d is = %d\n",num1,num2,num3,max);
	
	return 0;
}
