//Q43: Write a program to check if a number is a strong number.

#include <stdio.h>

int main() {
    int num, original_num, remainder, sum = 0;

    scanf("%d", &num);

    original_num = num;

    while (num > 0) {
        remainder = num % 10;
        
        int fact = 1;
        for (int i = 1; i <= remainder; i++) {
            fact *= i;
        }
        
        sum += fact;
        num /= 10;
    }

    if (sum == original_num && original_num != 0) {
        printf("Strong number\n");
    } else {
        printf("Not strong number\n");
    }

    return 0;
}
