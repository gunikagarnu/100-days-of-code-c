// Q39: Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main() {
    int num, remainder;
    int product = 1;

    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10; 
        
        if (remainder % 2 != 0) {
            product *= remainder; 
        
        num /= 10; 
    }

    printf("%d\n", product);

    return 0;
}
