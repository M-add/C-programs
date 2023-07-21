#include <stdio.h>

unsigned long long modifiedFibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return modifiedFibonacci(n - 1) + modifiedFibonacci(n - 2);
}

int main() {
    int term;
    printf("Enter the term number: ");
    scanf("%d", &term);

    unsigned long long result = modifiedFibonacci(term);
    printf("The %dth term in the modified Fibonacci sequence is: %llu\n", term, result);

    return 0;
}
