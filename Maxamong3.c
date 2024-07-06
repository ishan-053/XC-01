/* WAP to input 3 integers in type "long". check that which number is Max among three
   using conditional operator  */
 
 
 #include <stdio.h>
    int main() {
    long num1, num2, num3, max;

    
    printf("Enter three integers : ");
    scanf("%ld %ld %ld", &num1, &num2, &num3);

    
    max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

   
    printf("The maximum number among %ld, %ld, and %ld is: %ld\n", num1, num2, num3, max);

   
}

