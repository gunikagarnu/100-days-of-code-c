//Q37: Write a program to find the LCM of two numbers.

#include <stdio.h>

int main() {
    int num1, num2;
    int a, b, temp, hcf, lcm;

    scanf("%d %d", &num1, &num2);

    a = num1;
    b = num2;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    hcf = a;

    lcm = (num1 * num2) / hcf;

    printf("%d\n", lcm);

    return 0;
}
