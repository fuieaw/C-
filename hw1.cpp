#include <stdio.h>

int main(void)
{
	int num1 = 10;
	int num2 = 15;
	int num3 = num1 & num2;
	int num4 = num1 | num2;
	int num5 = num1 ^ num2;
	printf("Input two integers: 10 15\n");
	printf("%d & %d = %d\n", num1, num2, num3);
	printf("%d | %d = %d\n", num1, num2, num4);
	printf("%d ^ %d = %d\n", num1, num2, num5);
}