#include <stdio.h>

int is_prime_number(int n);

int main(void)
{
    int n;

    n = 1;
    printf("%d is prime: %d\n", n, is_prime_number(n));

    n = 2;
    printf("%d is prime: %d\n", n, is_prime_number(n));

    n = 11;
    printf("%d is prime: %d\n", n, is_prime_number(n));

    n = 16;
    printf("%d is prime: %d\n", n, is_prime_number(n));

    n = 29;
    printf("%d is prime: %d\n", n, is_prime_number(n));

    return (0);
}
