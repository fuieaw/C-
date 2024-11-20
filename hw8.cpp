#include <stdio.h>
#include <math.h>

double calculate_standard_deviation(double data[], int n) {
    double mean = 0.0;
    double sum_deviation = 0.0;

    for (int i = 0; i < n; i++) {
        mean += data[i];
    }
    mean /= n;

    for (int i = 0; i < n; i++) {
        sum_deviation += pow(data[i] - mean, 2);
    }

    return sqrt(sum_deviation / n);
}

int main() {
    double numbers[5];

    printf("실수 5개를 입력하세요: ");
    for (int i = 0; i < 5; i++) {
        scanf_s("%lf", &numbers[i]);
    }

    double standard_deviation = calculate_standard_deviation(numbers, 5);

    printf("표준편차 = %.3f\n", standard_deviation);

    return 0;
}
