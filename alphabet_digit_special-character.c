/*
  Binoy Das Gupta
  C program to check whether a character is alphabet, digit or special character
  13-03-2021
*/

#include<stdio.h>
int main()
{
	//declaring variable
	char ch;
	
	//taking input
	printf("Enter a character = ");
	scanf("%c",&ch);
	
	if(ch>='a' && ch<='z' || ch>='A' && ch<='Z') //Alphabet check
	{
		printf("The entered charater, %c is an alphabet\n",ch);
	}
	else if(ch>='0' && ch<='9') //Digit check
	{
		printf("The entered character, %c is a digit\n",ch);
	}
	else //Special character check
	{
		printf("The entered character, %c is a special character\n",ch);
	}
	
	return 0;
}
