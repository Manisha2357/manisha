#include <stdio.h>
int main() {
    int number, reversedNumber, digit1, digit2, digit3;
    printf("Enter a three-digit number: ");
    scanf("%d", &number);
    digit1 = number % 10;        // Last digit
    digit2 = (number / 10) % 10; // Middle digit
    digit3 = number / 100;       // First digit
    reversedNumber = digit1 * 100 + digit2 * 10 + digit3;
    printf("Reversed number is: %d\n", reversedNumber);
    return 0;
}
