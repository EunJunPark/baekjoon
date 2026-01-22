#include <stdio.h>
#pragma warning(disable: 4996)


int is_prime(int n);

int main() {
    int M, N;
    scanf("%d %d", &M, &N);

    for (int i = M; i <= N; i++) {
        if (is_prime(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}

int is_prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}