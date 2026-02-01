#include <stdio.h>

void solve(int result);
void input_handler();

int main() {
    input_handler();
    return 0;
}

void input_handler() {
    int a, b, c;
    if (scanf("%d %d %d", &a, &b, &c) == 3) {
        solve(a * b * c);
    }
}

void solve(int result) {
    int counts[10] = {0};

    if (result == 0) {
        counts[0] = 1;
    } else {
        while (result > 0) {
            counts[result % 10]++;
            result /= 10;
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("%d\n", counts[i]);
    }
}