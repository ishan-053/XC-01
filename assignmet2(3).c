#include <stdio.h>

void main() {
    int rows = 5; 
    int r, c;

    
    for (r= 1; r <= rows; r++) {
        
        for (c = 1; c <= r; c++) {
            printf("%d", c); 
        }
        printf("\n"); 
    }

    
}

