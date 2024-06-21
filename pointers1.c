/* Pointers*/

#include<stdio.h>

void main ()
{
	int no;
	int *p1;
	
	no = 39;
	printf("\n no = %d",no);
	
	printf("\n Memory Address = %u",&no); // 8860
        
		p1=&no;
		
		printf("\n *p1(value) = %d",p1);	
		printf("\n p1 (memory address)= %u ",p1); //8860
		
		no=200;
		printf("\n no=%d \t *p1 = %d",no,p1);
		
		*p1=300;
		
		printf("\n no = %d \t *p1 = %d",no,*p1);
		
	
}
