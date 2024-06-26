/* 16 WAP to input marks of a student and print the result (pass/fail) using conditional
operator.*/
#include<stdio.h>
void main()
{
	int marks,pass,fail;
	
	printf("\n Enter the Marks:");
	scanf("%d",&marks);
	marks>=35 ? printf("\n pass"):printf("\n fail");
	//printf("\n Marks=%d,pass=%d,fail=%d",marks,pass,fail);
	
}
