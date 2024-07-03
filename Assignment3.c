//Q21]

#include<stdio.h>
void main()
{
	int no,sum,rem,n;
	float avg;
	
	printf("\n Enter the Number:");
	scanf("%d",&no);
	
	printf("\n Enter the even number:");
	scanf("%d",&n);
	
	
	
	while(no>0)
	{
		
		rem=no%10;
		
		if(rem%2==0)
		
			sum=sum+rem;
			no=no/10;
		
		
	}
	
	avg= (float)sum/n;
	
	printf("\n Sum of the Even Numbers:%d",sum);
	
	printf("\n Average of the Even Number:%.2f",avg);
}
