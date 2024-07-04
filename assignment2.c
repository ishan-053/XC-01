/*Q22.1*/
#include <stdio.h>

int main() {
    int line, r, c;

    line=5;
    

    r = 1;
    while (r <= line) {
        c = 1;
        
        
        while (c <= line - r) {
            printf(" ");
            c++;
        }

        c = 1;
        
        while (c <= 2 * r - 1) {
            printf("*");
            c++;
        }
        printf("\n");

        
        r++;
    }

    return 0;
}

