#include<stdio.h>
void main()
{
	int no,rev,rem;
	
	no=750;
	
	rev=0;
	while(no>0)
	{
		rem=no%10;
		rev=rev*10+rem;
		no=no/10;
	}
	printf("\n Reverse of a Number is :%03d",rev);
}
