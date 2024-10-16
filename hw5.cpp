#include <stdio.h>

void num(int n) {
    if (n > 1) {
        num(n / 2);
    }
    printf("%d", n % 2);
}

int main() {
    int number;

    printf("Please enter a number: ");
    scanf_s("%d", &number);

    num(number);
    printf("\n");

    return 0;
}
