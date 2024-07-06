/* WAP to input n1 and n2. where n1 and n2 should be between -128 to +127. 
   Print value of n1 till n2 along with Equivalent ASII Character */
   #include<stdio.h>
   void main()
   
   	
{
	
    int n1, n2;
    char a,i;
    
    printf("Enter value for n1 (-128 to 127): ");
    scanf("%d", &n1);

    
    printf("Enter value for n2 (-128 to 127): ");
    scanf("%d", &n2);

    
    printf("\n \t ASCII \n");
    
    for ( i = n1; i <= n2; i++) 
	{
		a =(char)i;
        printf("%d\t%c\n", i,a);
    }

    
}

   
