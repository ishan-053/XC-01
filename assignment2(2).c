/*Q22.2*/
#include <stdio.h>

int main() {
    int rows = 5; 
    int r = 0, c = 0;
    
    while (r < rows) {
       
        c = 0;
        while (c < r) {
            printf(" ");
            c++;
        }
        
       
        c = 0;
        while (c < 2 * (rows - r) - 1) {
            printf("*");
            c++;
        }
        
        printf("\n");
        r++;
    }
    
    
}

