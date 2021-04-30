/*
  Binoy Das Gupta
  C program to input month number and print number of days in that month.
  13-03-2021
*/

#include<stdio.h>
int main()
{
	//declaring variable 
	int mon_num;
	
	//taking input
	printf("Enter any month number = ");
	scanf("%d",&mon_num);
	
	if(mon_num==1||mon_num==3||mon_num==5||mon_num==7||mon_num==8||mon_num==10||mon_num==12)
	{
		printf("The number of days in the month is 31 days\n");
	}
	else if(mon_num==2)
	{
		printf("The number of days in the month is 28/29 days\n");
	}
	else 
	{
		printf("The number of days in the month is 30 days\n");
	}
	
	return 0;
}
