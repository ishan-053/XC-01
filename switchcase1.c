#include<stdio.h>
int main()
{
	int a,b;
	printf("\n Enter a and b:");
	scanf("%d%d",&a,&b);
	
	switch(a>b || a==b)
	{
		case 1:
			if(a==b)
			printf("both are same");
			else printf("\n is max");
			
			break;
			
		case 0:
		    printf("\n b is max");
			break;	
	}
}
