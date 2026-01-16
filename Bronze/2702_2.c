#include<stdio.h>
#pragma warning(disable: 4996)

#include <stdio.h>

int min(int a, int b);
int max(int a, int b);
int get_gcd(int a, int b);

int main() {
    int n;
    scanf("%d", &n);

    while (n--) {
        int a, b;
        scanf("%d %d", &a, &b);

        int gcd = get_gcd(a, b);
        int lcm = (a * b) / gcd;

        printf("%d %d\n", lcm, gcd);
    }
    return 0;
}

int min(int a, int b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int get_gcd(int a, int b) {
    int big = max(a, b);
    int small = min(a, b);

    while (small != 0) {
        int tmp = big % small;
        big = small;
        small = tmp;
    }

    return big;
}