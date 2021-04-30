/*
  Binoy Das Gupta
  C program to check alphabets using conditional operator
  06-03-2021
*/

#include<stdio.h>
int main()
{
	//declaring variable
	char ch;
	
	//taking inputs
	printf("Enter a character = ");
	scanf("%c",&ch);
	
	//conditional operator
	(ch>='a' && ch<='z'||ch>='A' && ch<='Z')?printf("The entered character is an alphabet"):printf("The entered character is not an alphabet");
	
	return 0;
}
