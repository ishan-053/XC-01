/*WAP to print
       1
       2 1
       3 2 1
       4 3 2 1
       5 4 3 2 1 */
#include<stdio.h>
void main()
{
	int r,c;
	r=c;
	
	while(r<=5)
    {
	c=r;

    
    while(c>=1)
    {
    	printf("%d",c);
    	c--;
	}
	printf("\n");
	r++;

   }
}
