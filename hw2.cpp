#include <stdio.h>

int main(void)
{
	float num = 0;
	printf("Please enter kilometers");
	scanf_s("%f", &num);
	float num1 = num * 0.609;
	printf("%.1f km is equal to %.1f miles", num, num1);

	return 0;
}