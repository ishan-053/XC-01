/*
5						
4 4                        
3 3 3                      
2 2 2 2                     
1 1 1 1 1


*/


#include<stdio.h>

void main()
{
	int r, c;
	
	r=5;
	while(r>=1)
	{
		c=1;
		while(c<=r)
		{
			printf(" %d",r);
			c++;
		}
		printf("\n");
		r--;
	}
}


