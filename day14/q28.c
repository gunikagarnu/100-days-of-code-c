//Q28: Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>

int main() {
    int n;
    long long product = 1;
    int has_even = 0;

    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2) {
        product *= i;
        has_even = 1;
    }

    if (has_even) {
        printf("%lld\n", product);
    } else {
        printf("0\n"); 
    }

    return 0;
}
