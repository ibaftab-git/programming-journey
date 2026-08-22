#include <stdio.h>

int main() {
    float num;
    int integerPart, rightmostDigit;

    printf("Enter a floating-point number: ");
    scanf("%f", &num);

    integerPart = (int)num;          // Type casting float to int
    rightmostDigit = integerPart % 10;

    if (rightmostDigit < 0)
        rightmostDigit = -rightmostDigit; // handle negative numbers

    printf("Rightmost digit is: %d\n", rightmostDigit);

    return 0;
}
