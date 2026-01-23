#include <stdio.h>
#pragma warning(disable: 4996)

int count_zeros(int n);

int main() {
    int N;
    scanf("%d", &N);
    printf("%d", count_zeros(N));
    return 0;
}

int count_zeros(int n) {
    int count = 0;
    for (int i = 5; i <= n; i *= 5) {
        count += n / i;
    }
    return count;
}