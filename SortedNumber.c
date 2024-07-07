/*WAP to input 3 integer numbers in a,b, and c. show it in sorted order */
#include<stdio.h>
void main()
{
	int n1,n2,n3;
	int a,b,c;
	printf("\n Enter value Number 1 :");
	scanf("%d",&n1);
	
	printf("\n Enter value Number 2 :");
	scanf("%d",n2);
	
	printf("\n Enter value Number 3 :");
	scanf("%d",&n3);
	
	if(n1>n2)
	{
	int a=n1;
	
		n1=n2;
		n2=a;
	}
	if(n2>n3)
	{
	int b=n2;
	
		n2=n3;
		n3=b;
	}
	if(n3>n2)
	{
	int c=n3;
	   n2=n3;
	   n3=c;	
	}
}
