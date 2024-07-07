/* WAP to input 4 Integer numbers. perform addition of first two, addition of second two. chech that
   which addition is max. replace first two numbers with max number. */
   #include<stdio.h>
   void main()
   {
   	int a,b,n1,n2,n3,n4;
   	
   	printf("\n Enter Num 1:");
   	scanf("%d",&n1);
   	
   	printf("\n Enter Num 2:");
   	scanf("%d",&n2);
   	
   	printf("\n Enter Num 3:");
   	scanf("%d",&n3);
   	
   	printf("\n Enter Num 4:");
   	scanf("%d",&n4);
   	
   	a=n1+n2;
   	
   	printf("\n Addition of 1st Two no. : %d",a);
   	printf("\n -------------------------------");
   	b=n3+n4;
   		printf("\n Addition of Last Two no. : %d",b);
   		printf("\n -------------------------------");
   		if (a>b)
   		{
   			printf("\n a is Max");
   			n1=a;
   			n2=a;
		   }
		   else
		   {
		   	  printf("\n -------------------------------");
		   	printf("\n b is Max");
		   	n1=b;
		   	n2=b;
		   }
		    printf("\n -------------------------------");
		     printf("\n Updated value of Num 1: %d", n1);
             printf("\n Updated value of Num 2: %d", n2);
		
   }
