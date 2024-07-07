/* WAP to input n1 and n2. using while loop print numbers between them. count and print how many numbers
   between the range are having digits either 3,4 or 5  */
   
#include<stdio.h>
void main()
{
	int n1,n2,t,i;
	int no,count,count_;
	printf("\n Enter value for n1:");
	scanf("%d",&n1);
	
	printf("\n Enter value for n2:");
	scanf("%d",&n2);
	
	while(no>0)
	{
		if(no==3||no==4||no==5)
		{
		count++;}
		
		no /= 10;
	}
	if(n1>n2)
	{
		t=n1;
		n1=n2;
		n2=t;
	}
	 count = 0;
    int special_count = 0;

    printf("Numbers between %d and %d:\n", n1, n2);
    for ( i = n1; i <= n2; i++) 
	{
        printf("%d ", i);
        count++;

        
		
            
        
    }

    printf("\nCount of numbers with digits 3, 4, or 5: %d\n", count_);

}
