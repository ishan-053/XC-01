#include<stdio.h>
void main()
{
	int rollno,m1,m2,m3,m4,m5,Total;
	char name[10];
	float avg;
	
	printf("\n Enter the Roll Number:");
	scanf("%d",&rollno);
	
	printf("\n Enter the Name of the Student:");
	scanf("%s",&name);
	
	printf("\n Enter the Maths Marks:");
	scanf("%d",&m1);
	
	printf("\n Enter the Physics Marks:");
	scanf("%d",&m2);
	
	printf("\n Enter the Chemistry Marks:");
	scanf("%d",&m3);
	
	printf("\n Enter the English Marks:");
	scanf("%d",&m4);
	
	printf("\n Enter the Geography Marks:");
	scanf("%d",&m5);
	
	Total=m1+m2+m3+m4+m5;
	printf("\n Total Marks Obtained:%d",Total);
	
	avg=Total/5.2f;
	printf("\n Average Marks Obtained:%f",avg);
}
