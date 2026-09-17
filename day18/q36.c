//Q36: Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>

int main() {
    int num1, num2;
    int a, b, temp;

    scanf("%d %d", &num1, &num2);

    a = num1;
    b = num2;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("%d\n", a);

    return 0;
}
