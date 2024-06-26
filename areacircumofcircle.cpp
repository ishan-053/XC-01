#include<stdio.h>
int main()
{
	int rad;
	int area,circum;
	
	printf("\n Enter the radius of Circle:");
	scanf("%d",&rad);
	
	area=(float)3.14*(float)rad*(float)rad;
	printf("\n Area of Circle:%d",area);
	
	circum=2*(float)3.14*rad;
	printf("\n Circumference of Circle:%d",circum);
}
