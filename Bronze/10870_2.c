#include <stdio.h>
#pragma warning(disable: 4996)

int Fibonacci(int n);

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", Fibonacci(n));
    return 0;
}

int Fibonacci(int n) {
    if (n == 0) return 0;

    int a = 0, b = 1, next;

    for (int i = 2; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
    }

    return b;
}