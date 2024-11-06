#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int numbers[5];
    int odd[5], even[5];
    int oddCount = 0, evenCount = 0;

    printf("Please input five integers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 0) {
            even[evenCount++] = numbers[i];
        }
        else {
            odd[oddCount++] = numbers[i];
        }
    }

    printf("Odd numbers: ");
    for (int i = 0; i < oddCount; i++) {
        printf("%d ", odd[i]);
    }
    printf("\nEven numbers: ");
    for (int i = 0; i < evenCount; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");

    return 0;
}
