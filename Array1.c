/* WAP to input 5 integers each of exact 3 digits and store them in arary. 
   find which are the numbers whose digit addition is more than 10 */
   
   #include<stdio.h>
   void main()
   {
   	int   x[5],no;
   	int   add_1,add_2,add_3,add_4,add_5;

	   printf("\n Enter 5 Integer Number"):
           for(i=0;i<=4;i++)
		   {
			   scanf("%d",&no);
		   }
   	
   	add_1 = (x[0]/100)+(x[0]/10)%10+(x[0]%10);
   	printf("\n Addn of Single Digit for 1st Value : %d",add_1);
   	
   	add_2 = (x[1]/100)+(x[1]/10)%10+(x[1]%10);
   	printf("\n Addn of Single Digit for 2nd Value : %d",add_2);
   	
   	add_3 = (x[2]/100)+(x[2]/10)%10+(x[2]%10);
   	printf("\n Addn of Single Digit for 3rd Value : %d",add_3);
   	
   	add_4 = (x[2]/100)+(x[2]/10)%10+(x[2]%10);
   	printf("\n Addn of Single Digit for 4th Value : %d",add_4);
   	
   	add_5 = (x[2]/100)+(x[2]/10)%10+(x[2]%10);
   	printf("\n Addn of Single Digit for 5th Value : %d",add_5);
   	
   	if(add_1>10)
   	{
   		printf("\n 1st value satisfied");
	   }
	   if(add_2>10)
	   {
	   	printf("\n 2nd value satisfied");
	   }
	   if(add_3>10)
	   {
	   	printf("\n 3rd value satisfied");
	   }
	   if(add_4>10)
	   {
	   printf("\n 4th value satisfied");
        }
    
	   if(add_5>10)        
	   {
	   	printf("\n 5th value satisfied");
	   }
	   else
	   {
	   	
	   	printf("\n ------------------------------- \n No Values Satisfied");
	   }
   }
