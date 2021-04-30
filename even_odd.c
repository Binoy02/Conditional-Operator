/*
  Binoy Das Gupta
  C program to check whether a number is even or odd using conditional operator
  06-03-2021
*/

#include<stdio.h>
int main()
{
	//declaring variables
	int num;
	
	//taking inputs
	printf("Enter the number = ");
	scanf("%d",&num);
	
	//conditional operator
	(num%2==0)?printf("%d is even",num):printf("%d is odd",num);
	
	return 0;
}
