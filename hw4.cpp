#include <stdio.h>

int main(void) {
    int num;

    printf("Please enter a number: ");
    scanf_s("%d", &num);

    if (num <= 1) 
    {
        printf("It is not a prime number.\n");
        return 0;
    }

    for (int num2 = 2; num2 * num2 <= num; num2++) 
    {
        if (num % num2 == 0) 
        {
            printf("It is not a prime number.\n");
            return 0;
        }
    }

    printf("It is a prime number.\n");
    return 0;
}