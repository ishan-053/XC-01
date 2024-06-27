/* Assignment: Write a menu driven program to calcualte and show area of circle, triangle
   and square using switch case */
   
   #include<stdio.h>
   #include<windows.h>
   
   void main()
   {
   	int a,b,c; //a= radius  b= base  c=height
   	int choise;
   	
   	   printf("\n Enter  value for radius : ");
	   scanf("%d",&a);

       printf("\n 1.Circle"); 
	   printf("\n 2.Sqaure");
	   printf("\n 3.Triangle");
	   printf("\n Enter choise:");
       scanf("%d",&choise);
       
       system("cls");
       printf("\n Generating Output...");
       Sleep(2000);        
       
	        switch(choise) 
	        {
	        
	        	case 1:
	        		printf("\n Area of Circle: %.2f",(3.14*a*a));
	        		break;
	        	case 2:
	        		printf("\n Area of Sqaure:%d",(a*a));
	        		break;
	   
			}
	        
	
	   
	 
	   
   }
