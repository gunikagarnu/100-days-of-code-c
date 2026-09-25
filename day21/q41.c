//Q41: Write a program to swap the first and last digit of a number.

#include <stdio.h>

int main() {
    int num, original_num, first_digit, last_digit, digits_count, swapped_num;

    scanf("%d", &num);

    original_num = num;
    last_digit = num % 10;
    digits_count = (int)log10(num);

    first_digit = num;
    while (first_digit >= 10) {
        first_digit /= 10;
    }

    swapped_num = last_digit * pow(10, digits_count);
    swapped_num += original_num % (int)pow(10, digits_count);
    swapped_num -= last_digit;
    swapped_num += first_digit;

    printf("%d\n", swapped_num);

    return 0;
}
