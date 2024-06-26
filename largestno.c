// 15 WAP to input two numbers and print the greatest using conditional operator.//
#include<stdio.h>
void main()
{
	int a,b,lar;
	printf("\n Enter the Number a:");
	scanf("%d",&a);
	
	printf("\n Enter the Number b:");
	scanf("%d",&b);
	
	lar=a>b ? a:b;
	printf("\n Largest Number of a=%d and b=%d is lar=%d",a,b,lar);
}
