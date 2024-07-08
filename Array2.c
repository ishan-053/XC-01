/* WAP to input 5 integers each of exact 3 digits and store them in arary. 
   print possible combinations of each numbers in array 
   
   Sample input : 183, 489, 903, 234, 531
   Sample Output
   	183	 = 138, 831, 381
   	so on*/
   	
   	#include<stdio.h>
   	void main()
   	{  
	   	int   x[5]={123,223,323,423,523};
	   	int  comb_1,comb_2,comb_3,comb_4,comb_5;
	   	
	   	comb_1 = (x[0]/100)+(x[0]%10)+(x[0]%10);
	   	
	   	{
	   		printf("\n Combinations Are :%d",comb_1);
		   }
	   }
   	
