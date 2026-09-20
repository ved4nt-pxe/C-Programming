#include <stdio.h>

int main() {
    unsigned long long n, i;
    unsigned long long t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%llu", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; i++) {
        printf("%llu", t1);
        if (i < n) {
            printf(", ");
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");

    return 0;
}
