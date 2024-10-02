#include <stdio.h>

int main() {
    int i, j;
    int h = 5;
    for (i = 1; i <= h; i++) 
    {
        for (j = 1; j <= h - i; j++) 
        {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) 
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}