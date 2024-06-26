/* 13,14 WAP to find out the quotient and remainder of two numbers. ( Without using
modulus ( % ) operator) [ use the formula : a - (a/b)*b */
#include<stdio.h>
int main()
{
	int a,b,rem,quo;
	
	printf("\n Enter First number:");
	scanf("%d",&a);
	
	printf("\n Enter Second number:");
	scanf("%d",&b);
	
	rem= a-(a/b)*b;
	printf("\n Remainder=%d",rem);
	
	quo=a/b;
	printf("\n Quotient=%d",quo);
}
