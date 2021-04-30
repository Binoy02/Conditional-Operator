/*
  Binoy Das Gupta
  C program to find whether a year is leap year or not using conditional operator
  06-03-2021
*/

#include<stdio.h>
int main()
{
	//declaring variable
	int y;
	
	//taking input
	printf("Enter a year = ");
	scanf("%d",&y);
	
	//conditional operator
	((y%4==0 && y%100!=0)||(y%400==0))?printf("The entered year, %d is a leap year",y):printf("The entered year,%d is not a leap year",y);
	
	return 0;
}
