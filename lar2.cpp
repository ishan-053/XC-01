
#include<stdio.h>
int main()
{
	int a,b,c,lar;
	printf("\n enter the number a:");
	scanf("%d",&a);
	
	printf("\n enter the number b:");
	scanf("%d",&b);
	
	printf("\n enter the number c:");
	scanf("%d",&c);
	
	lar=(a>b) ? ((a>c) ? a:c) : ((b>c) ? b:c);
	printf("\n largest number of a=%d and b=%d and c=%d is lar=%d",a,b,c,lar);
	
}
