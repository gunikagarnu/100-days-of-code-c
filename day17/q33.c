//Q33: Write a program to check if a number is an Armstrong number.

#include <stdio.h>

int main() {
    int num, original_num, remainder, result = 0;

    scanf("%d", &num);

    original_num = num;

    while (num > 0) {
        remainder = num % 10;
        result += remainder * remainder * remainder; 
        num /= 10;
    }

    if (original_num == result) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }

    return 0;
}
